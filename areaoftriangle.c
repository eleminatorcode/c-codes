// TO Find The Area Of Triangle


#include<stdio.h>
#include<conio.h>
int main(){
    int l,b;
    printf("Enter the length of triangle:");
    scanf("%d",&l);
    printf("Enter the breath of triangle:");
    scanf("%d",&b);
    int arOfTriangle;
    arOfTriangle=((l*b)*0.5);
    printf("The area of triangle is:%d",arOfTriangle);
    return 0;
}

//  OUTPUT
/* 

Enter the length of triangle:7
Enter the breath of triangle:8

The area of triangle is:28

*/