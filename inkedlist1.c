#include <stdio.h>
#include <stdlib.h>

// Define the structure for the linked list node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertAtBeginning(struct Node** head, int new_data) {
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    
    new_node->data = new_data;

    new_node->next = (*head);
    
    // Move the head to point to the new node
    (*head) = new_node;
}
void insertAtEnd(struct Node** head,int new_data)
{
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    // If the list is empty, make the new node the head
    if ((*head) == NULL) {
        (*head) = new_node;
        return;
    }

    // Traverse to the last node
    struct Node* current = (*head);
    while (current->next != NULL) {
        current = current->next;
    }

    // Update the last node's next pointer
    current->next = new_node;
}
void insertAtposition(struct Node** head,int new_data,int pos){
    struct Node* new_node=(struct Node*) malloc(sizeof(struct Node*));
    new_node->data=new_data;
    int count=0;
    struct Node* current=(*head);
    
    if(*head==NULL){
        *head=new_node;
        return ;
    }
    while (count<pos-1){
        current=current->next;
        count++;
    }
    if(current!=NULL){
        struct Node* a=current->next;
        current->next=new_node;
        new_node->next=a;
        

    }
    
    

    
}



void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Driver program to test the above functions
int main() {
    struct Node* head = NULL;
    
    //Inserting nodes at the beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    printf("Linked list before end:\n");
    printList(head);
    printf("\n");
    insertAtEnd(&head,50);
    
    // Print the linked list
    printf("Linked list: \n");
    printList(head);
    printf("\n");
    insertAtposition(&head,4,2);
    printList(head);
    
    return 0;
}
