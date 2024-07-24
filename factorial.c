   FIND THE FACTORIAL OF NUMBER

#include<stdio.h>


int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a=1;
    for (int i=1;i<=n;i++){
        a*=i;
    }
    printf("The factorial of the number:%d",a);
}


//  OUTPUT
/* 

    Enter the number:7
    The factorial of the number:5040

*/