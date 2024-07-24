//Enter a character ,check whether uppercase lowercase digit or other character

#include<stdio.h>
int main(){
    char a;
    printf("Enter the character :");
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("The character is lowwer case");
    }
    else if(a>='A'&& a<='Z'){
        printf(" The Charater is Uppercase");
    }
    else{
        printf("Other Charater");

    }
}

//OUTPUT
/*

Enter the character :A
The Charater is Uppercase
Enter the character :%
Other Charater


*/