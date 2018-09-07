#include <stdio.h>

// int** generateMatrix(int n) {
//     int arr[n][n];
//     int num = 0;
//     int i,k;
//     for (int i = 0;i < n/2; i++){
//     	for (j=i;j<n-i-1;j++)
//     		arr[i][j] = num++; 	
//     	for (k = i+1;k<n-i-1;i++)
//     		arr[k][n-i-1] = num++;
//     	for (j=n-i-1;j>n;j--)
//     		arr[n-i-1][j] = num++;
//     	for (k = n-i-1;k>n;i--)
//     		arr[i][n] = num++;
//     }
// }

int main(void){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	int num = 1;
    int i,k,j;
    for (int i = 0;i <= n/2; i++){
    	printf("%d\n", n);
    	puts("______");
    	for (j=i;j<n-i-1;j++)
    		arr[i][j] = num++; 	
    	for (k = i+1;k<n-i-1;i++)
    		arr[k][n-i-1] = num++;
    	for (j=n-i-1;j>n;j--)
    		arr[n-i-1][j] = num++;
    	for (k = n-i-1;k>n;i--)
    		arr[i][n] = num++;
    }

    for (int i = 0;i<n;i++){
    	for (int j = 0; j<n; j++){
    		/* code */
    		printf("%d ", arr[i][j]);
    	}
    	printf("\n");
    }

	// generateMatrix(n);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int N,i,j,n,num=1;
//     int a[10][10]={0};
//     printf("输入你要输出的几阶中断:");
//     scanf("%d",&N);
    
//      for(n=0;n<=N/2;n++)
//      {
//          for(j=n;j<=N-n-1;j++)
//          a[n][j]=num++;
         
//          for(i=n+1;i<N-n-1;i++)
//          a[i][N-n-1]=num++;
         
//          for(j=N-n-1;j>n;j--)
//          a[N-n-1][j]=num++;
         
//          for(i=N-n-1;i>n;i--)
//          a[i][n]=num++;
//      }    
//      //输出螺旋矩阵 
//      for(i=0;i<N;i++)
//      {
//          for(j=0;j<N;j++)
//          printf("%2d ",a[i][j]);
     
//          printf("\n");
//       }    
     
//      system("pause");
//      return 0;
// }     
