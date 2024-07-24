// SWAPPING without third variable

#include<stdio.h>
int main(){
     int a,b;
     printf("The value of a is:");
     scanf(" %d",&a);
     printf("Enter the value of b:");
     scanf("%d",&b);
     a=a+b;
     b=a-b;
     a=a-b;r̥
     printf("Value after  Swapping: a=%d b=%d",a,b);
     return 0;
    int a=10 / 20;
    printf("%d",a);
}

//  OUTPUT
/*

    The value of a is:5
    Enter the value of b:9
    Value after  Swapping: a=9 b=5

*/