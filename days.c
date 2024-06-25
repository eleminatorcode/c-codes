//CONVERT DAYS IN MONTHS 

#include<stdio.h>
int main(){
    int days;
    printf("Enter the days:");
    scanf("%d",&days);
    int months;
    months=days/30;
    days=days%30;
    printf("Months is:%d  Days is:%d",months,days);
}

//OUTPUT
/* 

Enter the days:999
Months is:33  Days is:9

*/