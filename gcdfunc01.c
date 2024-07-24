#include<stdio.h>
int gcd(int a,int b){
    int gcd=1;
    for (int i=1;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0){
          gcd =i;
        }
    }
    return gcd;
}
int main(){
    int x,y,z;
    printf("enter the threee number :");
    scanf("%d %d %d",&x,&y,&z);
    int answer=gcd(x,y);
    int ans=gcd(answer,z);
    printf("GCD of the number is:%d",ans);
}