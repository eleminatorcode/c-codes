// MATRIX Row Eelement Sum

#include<stdio.h>
int main(){
    int n;
    int sum=0;
    // For  input  of ARRAY
    printf("enter the size of matrix:");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("enter the number at[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);

        }
    }
     // For Output Of ARRAY
  for(int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        sum=sum+arr[i][j];
        printf("%d",arr[i][j]);
        printf("  ");
    }
    printf("sum =%d",sum);
    printf("\n");
    sum=0;
  }
}

//OUTPUT
/*

enter the size of matrix:2
enter the number at[0][0]:2
enter the number at[0][1]:4
enter the number at[1][0]:5
enter the number at[1][1]:6
2  4  sum =6
5  6  sum =11

*/