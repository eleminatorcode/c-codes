#include<stdio.h>
#include<math.h>
int main(){
    int number;
    int p=0;
    int sum=0;
    int digit;
    printf("Enter the Octal number :");
    scanf("%d",&number);
    while(number>0){
        digit=number%10;
        sum+=digit*pow(8,p);
        p++;
        number=number/10;
    }
    printf("%d",sum);
}