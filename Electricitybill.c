// TO calculate Electricity bill

#include<stdio.h>   
int main(){
    int units;
    float bill;
    printf("Enter The Unit Used :");
    scanf("%d",&units);
    if(units>0&& units<=200){
        bill=units*0.50;
    }
    else if(units>200&&units<=400){
        bill=100+units*0.65;
    }
    else if(units>400&& units<=600){
        bill=230+units*0.80;
    }
    else {
        bill=390+units*1.0;
    }

    printf("Electricity Bill:%.2f",bill);

}

//OUTPUT
/*
Enter The Unit Used :150
Electricity Bill:75.00 

Enter The Unit Used :700
Electricity Bill:1090.00
*/