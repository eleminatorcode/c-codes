// Display  in a number and display the day name :
#include<stdio.h>
int main(){
    int day;
    printf("Enter the day (0-6):");
    scanf("%d",&day);
    printf("Entered day is :%d\n",day);
    switch(day){
        case 0: printf("Monday\n");
                printf("Week Start");
                break;
        case 1: printf("Tuesday");
                break;
        case 2: printf("Wednesday");
                break;
        case 3: printf("Thursday");
                break;
        case 4: printf("Friday");
                break;
        case 5: printf("Saturday\n");
                printf("Week End");
                break;
        case 6: printf("Sunday");
                break;
         default : printf("Entered day is Not Valid");
    }
}
//OUTPUT
/*
Enter the day (0-6):0
Entered day is :0
Monday
Week Start
*/
