// EXTRACT LAST DIGIT FROM NUMBER

#include<stdio.h>
int main(){
    int a;
    int k;
    printf("Enter the number:");
    scanf("%d",&a);
    k=a%10;
    printf("Extracted last digit is:%d",k);

    
}
//OUTPUT
/*

Enter the number:456
Extracted last digit is:6

*/