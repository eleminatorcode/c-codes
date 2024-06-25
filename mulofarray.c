// To Multiply Two Matrix


#include<stdio.h>    
#include<stdlib.h>  
int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
system("cls");  
printf("enter the number of row=");    
scanf("%d",&r);    
printf("enter the number of column=");    
scanf("%d",&c);    

 // Enter The Element of First Matrix
printf("enter the first matrix element=\n");    
for(i=0;i<r;i++){
        for(j=0;j<c;j++){    
            scanf("%d",&a[i][j]);    
            }    
        }  
        printf("\n");

// Print The Element of First Matrix
        for(i=0;i<r;i++){    
            for(j=0;j<c;j++){    
                printf("%d",a[i][j]); 
                printf("  ") ;
                }   
                printf("\n"); 
            }  
             printf("\n"); 
// Enter The Element of Second Matrix
         printf("enter the second matrix element=\n");    
         for(i=0;i<r;i++){    
            for(j=0;j<c;j++){    
                scanf("%d",&b[i][j]);    
                }    
            }   

          printf("\n"); 
// Print The Element of Second Matrix
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    printf("%d",b[i][j]);  
                    printf("  ") ;
                }    
                printf("\n"); 
            }   
            printf("\n"); 


// Multiplication of Matrix
            printf("multiply of the matrix=\n");    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    mul[i][j]=0;    
                    for(k=0;k<c;k++)    
                    {    
                        mul[i][j]+=a[i][k]*b[k][j];    
                    }    
                }    
            } 


//For Printing Result    
            for(i=0;i<r;i++)   
            {    
                for(j=0;j<c;j++)    
                {    
                    printf("%d\t",mul[i][j]);    
                }    
                printf("\n");    
                
            }    
            return 0;  
    }  
    //OUTPUT
    /*
      enter the number of row=2
      enter the number of column=2
      enter the first matrix element=
      4
      5
      8
      7

      4  5  
      8  7  

      enter the second matrix element=
      4
      5
      6
      7

      4  5  
      6  7  

      multiply of the matrix=
      46      55
      74      89
    
    */