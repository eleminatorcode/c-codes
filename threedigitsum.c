//Enter three Digit number and sum each Digit
#include<stdio.h>
int main(){
    int a;
    int sum=0;
    int x,y,z,q;
    printf("Enter the three  digit number:");
    scanf("%d",&a);
    x=a%10;
    y=a/10;
    z=y%10;
    q=y/10;
    sum+=x+q+z;
    printf("THE SUM OF THREE DIGIT IS :%d",sum);

}

//OUTPUT
/*

Enter the three  digit number:999
THE SUM OF THREE DIGIT IS :27 

*/