//Find Root of quadratic equation a,b,c

#include<stdio.h>
#include<math.h>
int main(){
   int a,b,c;
    printf("Enter the Quadratic Equation :\n");
    
    printf("a->");
    scanf("%d",&a);
    printf("b->");
    scanf("%d",&b);
    printf("c->");
  scanf("%d",&c);
    printf("%dX^2+%dX+%d \n",a,b,c);
    float D,R1,R2;
    D=(pow(b,2)-(4*a*c));
    if(D>=0){
        R1=(-b+sqrt(D))/(2*a);
        printf("R1=%f\n",R1);
        R2=(-b-sqrt(D))/(2*a);
        printf("R2=%f\n",R2);
        
    }
    else{
        printf("It is imaginary");
    }
}

//OUTPUT
/*
Enter the Quadratic Equation :
a->2
b->4
c->2
2X^2+4X+2 
R1=-1.000000
R2=-1.000000
*/