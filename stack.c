#include<stdio.h>
#include <limits.h>
#include<stdlib.h>

struct  Stack{
    int top;
    unsigned capacity;
    int * array;
};
 struct  Stack* createStack(unsigned capacity){
    struct Stack* stack=(struct Stack * ) malloc ( sizeof(struct Stack)); 
    stack->capacity=capacity;
    stack->array=(int *) malloc( stack->capacity*sizeof(int));
    stack->top=-1;
    return stack;
 }
 int isFULL(struct Stack* stack){
    return stack->top == stack->capacity-1;
    
 }
 int isEMPTY(struct Stack* stack){
    return stack->top==-1;
 }
 
void push(struct Stack* stack, int item){
    if(isFULL(stack))
       return;
    
       stack->array[++stack->top]=item;
       printf("pushed number is: %d",item);
       printf("\n");
        
    


}
int pop(struct Stack* stack){
    if(isEMPTY(stack)){
       return INT_MIN;
    }
    
        return stack->array[stack->top--];
}
   int top(struct Stack* stack){
    if(isEMPTY(stack))
    return INT_MIN;
     return  stack->array[stack->top];
    
}

int main(){
    struct Stack* stack= createStack(50);
    push(stack,47);
    push(stack,55);
    push(stack,5);
    printf("POP number is :%d\n",pop(stack));
    printf("TOP element is :%d",top(stack));


}