//COVERSION OF FAHRENHEIT TO CELCIUS

#include<stdio.h>

int main(){
    float fahrenheit;
    printf("Enter the Temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
     float celcius;
    celcius=(fahrenheit-32)*(5.0/9.0);
    printf("The temperature in Celcius is:%f",celcius);
    return 0;

}
//OUTPUT
/*
   Enter the Temperature in Fahrenheit:-32
   The temperature in Celcius is:-35.555557
*/