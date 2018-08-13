#include <stdio.h>
#include <string.h>

char* toLowCase(char *arr){
	int len = strlen(arr);
	int i;
	for(i = 0;i < len;i++){
		if(arr[i] > 'A' && arr[i] < 'Z'){
			arr[i] += 32;
		}
	}
	return arr;
}

int main(void){
	char a[] = "HellO";
	char array[10000];
	strcpy(array,toLowCase(a));
	puts(array);
}