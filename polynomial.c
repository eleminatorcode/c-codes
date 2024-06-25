#include<stdio.h>
#include<stdlib.h>
struct node
{
    int coffie;
    int powr;
    struct node * next;
};struct node* head=NULL;
void createPolynomial(struct node* ptr){
    struct node* newnode;
     int n;
     printf("How many terms you want: ");
     scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        
    
     newnode= (struct node*) malloc(sizeof(struct node));
    printf("Enter the coffiecient :");
    scanf("%d",&newnode->coffie);
    printf("Enter the power :");
    scanf("%d",&newnode->powr);
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{ ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
            
        }
        ptr->next=newnode;
        newnode->next=NULL;
    }
    }
}
void printPolynomial(struct node* ptr){
   if(ptr->next==NULL)
    printf("No Node in this Linked List....");
   
   else{
    printf("\n Polynomial list is :\n");
    while(ptr->next!=NULL){
        printf("%dx^%d+",ptr->coffie,ptr->powr);
        ptr=ptr->next;
    }
    printf("%dx^%d",ptr->coffie,ptr->powr);
   }
}

int main(){
    createPolynomial(head);
    printPolynomial(head);

    
    
    

}