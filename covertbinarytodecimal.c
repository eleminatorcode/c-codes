//Convert Binary To Decimal

#include<stdio.h>
#include<math.h>
int main(){
    int binary;
    int p=0;
    int sum=0;
    int digit;
    printf("Entered binary is :");
    scanf("%d",&binary);
    while(binary>0){
        digit=binary%10;
        sum=digit*pow(2,p)+sum;
        p++;
        binary=binary/10;
        
    }
    printf("Binary -> %d to Decimal -> %d",binary,sum);

}
//Output
/*

Entered binary is :1110
Binary -> 0 to Decimal -> 14

*/