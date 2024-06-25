#include<stdio.h>
void swap (int a, int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}
int main(){
    int a,b;
    printf("enter the value:");
    scanf("%d %d",&a,&b);
   
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    
    swap(a,b);
    
    return 0;
}
// we don't use static variable value at any 