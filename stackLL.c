#include<stdio.h>
#include<stdlib.h>

struct stackLL
{
    int data;
    struct stackLL* next; 
};

void push(struct stackLL**top,int data){
    struct  stackLL * newNode= (struct stackLL*) malloc(sizeof(struct stackLL));
    if(newNode==NULL){
        printf("OVERFLOW");
    }
    else{
    newNode->data=data;
    newNode->next=(*top);
    (*top)=newNode;
    }
    printf("PUSHED NUMBER IS:%d\n",data);
    
}
int isEmpty(struct stackLL*top){
     if( (top)==NULL){
        return 1;
     }
     else{
        return 0;
     }
}
int pop(struct stackLL** top){
    if(isEmpty(*top)){
        return -1;
    }
    struct stackLL * temp=(*top);
    int x=temp->data;
    (*top)=(*top)->next;
    free(temp);
    return x;
}
int peek(struct stackLL* top){
    if(isEmpty(top)){
        return 0;
    }
    return top->data;
}
void print(struct stackLL** top){
    if(isEmpty(*top)){
        return -1;
    }
    while(top!=NULL){
    printf("%d ",(*top)->data);
    (*top)=(*top)->next;
    }
}

int main(){
    struct stackLL * top=NULL;
    push(&top,50);
     push(&top,60);
     push(&top,5);
    push(&top,8);
     push(&top,14);
     printf("\n");
    int element =pop(&top);
    printf("POPED number is:%d\n\n",element);
    printf("TOP ELEMENT IS :%d\n\n",peek(top));
    printf("isEmpty:%d\n",isEmpty(top));
   printf("Element in stack is:") ;
   print(&top);
    

}

