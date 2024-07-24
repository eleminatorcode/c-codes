// Print Fibonacci 

#include<stdio.h>
int main(){
    int number;
    int temp;
    printf("Enter The number to print fibonacci:");
    scanf("%d",&number);
    int f1=0;
    int f2=1;
    printf("%d\t",f1);
    printf("%d\t",f2);
    for(int i=2;i<number;i++){
        temp=f1+f2;
        f1=f2;
        f2=temp;
        printf("%d\t",temp);
    }
    
}

//Output
/*
Enter The number to print fibonacci:5
0       1       1      3
*/