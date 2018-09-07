#include <stdio.h>
int main(void){
	int a[100][3] = {{1,1,0},{1,0,1},{0,0,0}};
	int lengthRow = sizeof(a)/sizeof(a[0]);
	int lengthCol = sizeof(a[1])/sizeof(a[0][0]);
	printf("%d %d \n",lengthRow,lengthCol);
}