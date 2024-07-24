//Decimal To Binary 
#include<stdio.h>
#include<math.h>
int main(){
    int number,digit;
    int p=0;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&number);
    while(number!=0){
         digit=number%2;
        sum+=digit*pow(10,p);
        p++;
        number=number/2;
    }
    printf("  Binary -> %d",sum);
}
//Output
/*
Enter the number : 14
Binary -> 1110
*/