// To Find The Area And Perimeter Of CIRCLE
#include<stdio.h>

int main(){
    int radius;
    printf("enter the radius of circle:");
    scanf("%d",&radius);
    float area,perimeter;
    area=3.14*radius*radius;
    perimeter=(2*(3.14*radius));
    printf("The area of circle is:%f",area);
    printf("\n");
    printf("The perimeter of the circle is :%f",perimeter);
    return 0;
}


//  OUTPUT
/*

enter the radius of circle:8
The area of circle is:200.960007
The perimeter of the circle is :50.240002

*/