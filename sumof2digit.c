#include<stdio.h>

int main(){
    int a;
    int sum=0;
    int x,y;
    printf("Enter the number:");
    scanf("%d",&a);
   x=a/10;
   y=a%10;
   sum+=x+y;
   printf("The sum of two digit is :%d",sum);
}