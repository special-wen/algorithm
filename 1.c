#include<stdio.h>
#include<string.h>

int f(int i,int k){
    int j;
    int sum = 0;
    if (k == 1){
        return 1;
    }else{
        for (j = i+1;j<26;j++){
            sum +=f(j,k-1);
        }
    }
    return sum;
}

int ca(char a[]){
    int i,j,count,n,length;
    int sum = 0;
    int k = strlen(a);
    for (i = 1;i<k;i++){
        for (int j= 1;j<=26;j++){
            sum+=f(j,i);
        }
    }
    int h = a[0]-'a'+1;
    for(int i = 1;i<h;i++){
        sum+=f(i,k);
    }

    count = h;
    for (i = 1;i<k;i++){
        n = a[i]-'a'+1;
        length = k-i;
        for (j = count+1;j<n;j++){
            sum += f(j,length);
        }
        count = n;
    }
    return sum+1;
}
int main(){
    int n ;
    char a[30];
    long long x;
    scanf("%d",&n);
    getchar();
    int array[2000];
    int i = 0;
    int j = 0;
    while (n--){
        x = 0;
        gets(a);
        x = ca(a);
        array[i] = x;
        i++;
    }
    for (j = 0;j<i;j++){
        printf("%d\n",array[j]);
    }
    return 0;
}