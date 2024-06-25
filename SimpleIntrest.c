//TO Find The Simple Intrest

#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter the Principle Amount:");
    scanf("%f",&p);
    printf("Enter the Rate of Interest:");
    scanf("%f",&r);
    printf("Enter the Time in years:");
    scanf("%f",&t);
    float si;

    si=(p*r*t)/100;
    printf("Simple Intrest:%f",si);
    return 0;



}

//OUTPUT
/*

    Enter the Principle Amount:4005
    Enter the Rate of Interest:12
    Enter the Time in years:2
    Simple Intrest:961.200012

*/