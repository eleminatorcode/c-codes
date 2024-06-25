
#include<stdio.h>                                                                                                                                                                  
void fact(int n);
int main(){
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    printf("\n");
    printf("Entered Number is :%d",a);
   fact(a);
   // printf("The factorial of Number is:%d",ans);
   return 0;
}
void fact(int n){
    int factorial=1;
    for(int i=n;i>=1;i--){
        factorial*=i;
    }
    printf("%d",factorial);
}    