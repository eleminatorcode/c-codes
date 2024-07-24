


#include<stdio.h>

int main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int b,c;
    int e=0;
    int p=1;
    while(a>0){
        b=a%10;
        c=b+1;
        if(c==10){
            c=c%10;
            e=c*p+e;
        }
        else{
        e=c*p+e;
        }
        p*=10;
        a=a/10;
    }
    printf("Every digit added by one:%d :",e);
}