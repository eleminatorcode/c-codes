#include<stdio.h>
#include<math.h>
int binarytohexa(int n);
int main(){
    int a;
    printf("Enter the binary number");
    scanf("%d",&a);
    int answer=binarytohexa(a);
    switch(answer){
        case 10: printf("A");
                
        case 11: printf("B");

        case 12: printf("C");
        case 13: printf("D");
        case 14: printf("E");
                 break;
        case 15: printf("F");
                 break;
        default: printf("%d",answer);                
    }
}
int binarytohexa(int g){
    int ans=0;
    int hexa;
    int n=0;
    while(n!=0){
        hexa=g%16;
        ans+=hexa*pow(2,n);
    }
   return ans;
}