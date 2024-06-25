// To Check Vowel and Consonant

#include<stdio.h>
int main(){
    char a;
    printf("Enter the character:");
    scanf("%c",&a);
    printf("Entered Character is :%c \n",a);
    if(a=='a'|| a=='A'||a=='e'|| a=='E'||a=='i'|| a=='I'||a=='o'|| a=='O'||a=='u'|| a=='U'){
        printf("Entered Character is Vowel");
    }
        else{
            printf("Entered Character is Consonant");
        }
    
}

//OUTPUT
/*
Enter the character:a
Entered Character is :a
Entered Character is Vowel

Enter the character:B
Entered Character is :B       
Entered Character is Consonant
*/