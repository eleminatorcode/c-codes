//Print Armstrong

#include<stdio.h>
#include<math.h>
int main(){
    int number;
    int digit;
    int sum=0;
    printf("Enter the number:");
    scanf("%d",&number);
    int orinumber=number;
    while(number>0){
        digit=number%10;
        int pwo=pow(digit,3);
        sum=pow(digit,3)+sum;
        number=number/10;
    }
    if(sum==orinumber){
        printf("Is Armstrong");
    }
    else{
        printf("Is not Armstrong");
    }
    
}

//Output
/*

Enter the number:153
Is Armstrong

*/
