// Prgramme for Swapping the number
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Value of a is:%d",a);
    printf("\n");
    printf("value of b is:%d",b);
    printf("\n");

    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Value of a After swaping :%d",a);
    printf("\n");
    printf("Value of b After swaping:%d",b);
    
}
//OUTPUT
/*
Enter the first number:5
Enter the second number:7
Value of a is:5
value of b is:7
Value of a After swaping :7
Value of b After swaping:5
*/
