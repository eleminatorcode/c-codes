//Student Percentage find
#include<stdio.h>
int main(){
    char name;
    int maths, english, science, hindi ,computer;
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter the marks of Maths:");
    scanf("%d",&maths);
    printf("Enter the marks of science:");
    scanf("%d",&science);
    printf("Enter the marks of English:");
    scanf("%d",&english);
    printf("Enter the marks of Hindi:");
    scanf("%d",&hindi);
    printf("Enter the marks of Computer:");
    scanf("%d",&computer);
    int sum;
    sum=maths+hindi+english+science+computer;
    printf("The Sum of All Subjects Marks is:%d\n",sum);
    float percentage;
    percentage=sum/5;
    printf("The Percentage of Your is :%f",percentage);

}
//OutPut
/*
Enter your name:tamur
Enter the marks of Maths:58
Enter the marks of science:45
Enter the marks of English:78
Enter the marks of Hindi:15
Enter the marks of Computer:78
The Sum of All Subjects Marks is:274
The Percentage of Your is :54.000000
*/