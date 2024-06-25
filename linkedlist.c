#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
    int data ;
    
    struct Node*next;
};
void append(struct Node** head_ref, int new_data)
{
    // Create a new node
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
 
    // Store the head reference in a temporary variable
    struct Node* last = *head_ref;
 
    // Set the next pointer of the new node as NULL since it
    // will be the last node
    new_node->next = NULL;
 
    // If the Linked List is empty, make the new node as the
    // head and return
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
 
    // Else traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }
 
    // Change the next pointer of the last node to point to
    // the new node
    last->next = new_node;
}
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

    
    

int main(){
    struct Node * head=NULL;
    append(&head,10);

    printList(head);
    
    

}