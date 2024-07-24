 #include<stdio.h>
 #include<stdlib.h>

 struct stackLL
 {
   int value;
   struct stackLL *next;
 };
 void push(struct stackLL **head ,int value){

   struct stackLL *temp= *head;
   struct stackLL *NewEle=(struct stackLL *)malloc(sizeof(struct stackLL));
   
   
   if(temp==NULL){
    
    struct stackLL *temp=(struct stackLL *)malloc(sizeof(struct stackLL));
    temp->value=value;
    temp->next=NULL;
    *head=temp;
   }
   NewEle->value=value;
  NewEle->next=*head;
  *head=NewEle;
    }
   void pop(struct stackLL **head){
    struct stackLL *temp=*head;
    *head=(*head)->next;
    free(temp);
   }
   void printList(struct stackLL **head){
    struct stackLL *temp=*head;
    while(temp->next!=NULL){
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
   }
   int main(){
    struct  stackLL *head = NULL;

    // Push elements into the stack
    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    printList(&head);
    pop(&head);
    printList(&head);
   }
 