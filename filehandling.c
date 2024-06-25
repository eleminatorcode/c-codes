#include<stdio.h>
void main(){
    int  rollNo;
    char name;
    int age;
    FILE *file;
    file=fopen("Myname.txt","w");
    if(file==NULL){
        printf("File does not exist\n");
        return;
    }
    printf("Enter the name:");
    scanf("%s",name);
    fprintf(file,"Name=%s\n",name);
    printf("enter the age:");
    scanf("%d",&age);
    fprintf(file,"Age=%d\n",age);
    printf("Enter ther roll number of AKTU:");
    scanf("%d",&rollNo);
    fprintf(file,"ROLL NO =%d\n",rollNo);
    
}