/*************************************************************************
	> File Name: email.c
	> Author: zxw
	> Mail: 
	> Created Time: 2017年10月20日 星期五 17时30分52秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

int Isymbol(char email[],int length);
int Seat(int length,int i);
int Location(char email[],int length);
int Least(char email[],int i,int length);

int main(void){
    char email[200];
    int length;
    int temp;
    int num;
    int aaa;
    int last;
    while(EOF != scanf("%s",email)){
        length = strlen(email);
        temp = Isymbol(email,length);
        //puts(email);
        //printf("%d\n",temp);
        if(temp == 0){
            printf("NO\n");
        }else{
            num = Seat(length,temp);
            aaa = Location(email,length);
            //printf("%d %d\n",num,aaa);
            if(num == 0 || aaa == 0){
                printf("NO\n");
            }else{
                last = Least(email,num,length);
                //printf("%d\n",last);
                if(last == 1){
                    printf("YES\n");
                }else{
                    printf("NO\n");
                }
            }
        }
    }
}

//判断是否有且只有一个'@'符号
int Isymbol(char email[],int length){
    //PUTs("-------\n");
    int i;
    int j = 0;
    int temp;
    for(i = 0;i<length;i++){
        //printf("%c\n",email[i]);   
        //puts(email[i]+"ddd");
        if(email[i] == '@'){
           j++;
           temp = i;
        }
    }
    if(j == 1){
        return temp;
        //return 1;
    }else{
        return 0;
    }
}

//判断'@'符号的出现的位置
int Seat(int length,int i){
    if(i==0 || i == length-1){
        return 0;
    }else{
        return i;
    }
}

//判断符号'.'出现的位置是否为首位
int Location(char email[],int length){
    int i;
    for(i=0;i<length;i++){
        if(email[i] == '.'){
            if(i == 0){
                return 0;
            }else{
                return 1;
            }
        }
    }
}

//'@'之后至少有一个'.',并且'@','.'不直接相连
int Least(char email[],int i,int length){
    int a;
    int sum = 0;
    int temp[20];
    for(a = i-1;a<length;a++){
        if(email[a] == '.'){
            temp[sum] = a;
            sum++;
            //printf("%d\n",a);
        }
    }
    if(sum == 0){
        return 0;
    }else{
        if(temp[0] == i+1 || temp[sum--] == length-- || temp[0]== i-1){
            return 0;
        }else{
            return 1;
        }
    }
}
