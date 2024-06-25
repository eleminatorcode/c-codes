// To find Left Most digit


#include<stdio.h>
int main(){
    float a;
     printf("Enter the digit:");
    scanf("%f",&a);
    int  b;
    int x= a;
    while(x>0){
        b=x%10;
        x=x/10;
        if(x==0){
            printf("The left most integer is :%d",b);
        }
    }
}

    //  OUTPUT
    /*
    
         Enter the digit:84.723
         The left most integer is :8
    
    */