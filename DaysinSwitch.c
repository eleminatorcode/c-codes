#include<stdio.h>
int main(){
    int day;
    printf("Enter The number 0-7:");
    scanf("%d",&day);
    switch(day){
        case 0:printf("Monday");
               break;         
        case 1:printf("Tuesday");
               break;
        case 2:printf("Wednesday");
               break;
        case 3:printf("Thursday");
               break;
        case 4:printf("Friday");
               break;
        case 5:printf("Saturday");
               break;
        case 6:printf("Sunday");
               break;
        default: printf ("Not a WeekDay");
    }
}