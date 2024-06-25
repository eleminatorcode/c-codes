//EXPRESION OF CENTIMETER IN METER ,CENTIMETER


#include<stdio.h>
int main(){
    int a;
    int k;
    int x;
    printf("Enter the Cm:");
    scanf("%d",&a);
    k=a%100;
    x=a/100;
    printf("%dM %dcm",x,k);

    
}

//OUTPUT
/*

Enter the Cm:180
1M 80cm

*/