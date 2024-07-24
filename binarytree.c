#include<stdio.h>
#include<stdlib.h>


struct binarytree
{
    int data;
    struct binarytree*left;
    struct binarytree*right;
};
struct binarytree * newnode(int val){
    struct binarytree* temp = (struct binarytree*) malloc(sizeof(struct binarytree));
  temp->data =val;
  temp->right=temp->left=NULL;
  return temp;
}

struct binarytree* insertIn(struct binarytree * root, int data){
  if(root==NULL){
  root = newnode(data);
  return root;
  }
  struct binarytree * queue[100];
  int front=0,rear=0;
  queue[rear++]=root;
  while (front!=rear){
    struct binarytree* temp=queue[front++];


    if(temp->left==NULL){
        temp->left= newnode(data);
        break;
    }
    else
    queue[rear++]=temp->left;
  
  if(temp->right==NULL){
    temp->right=newnode(data);
    break;
  }
  else
   queue[rear++]=temp->right;
 
}
return root;
}
void inorderTraversal(struct binarytree * root) {
    if (!root)
        return;
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}

// Preorder tree traversal (Root - Left - Right)
void preorderTraversal(struct binarytree * root) {
    if (!root)
        return;
    printf("%d ", root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// Postorder tree traversal (Left - Right - Root)
void postorderTraversal(struct binarytree * root) {
    if (root == NULL)
        return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ", root->data);
}
void levelorderTraversal(struct binarytree * root) {
    if (root == NULL)
        return;

    // Queue for level order traversal
    struct binarytree* queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;
    while (front != rear) {
        struct binarytree* temp = queue[front++];
        printf("%d ", temp->data);
        // Push left child in the queue
        if (temp->left)
            queue[rear++] = temp->left;
        // Push right child in the queue
        if (temp->right)
            queue[rear++] = temp->right;
    }
}
 int main(){
    struct binarytree* root=NULL;
     root = insertIn(root, 10);
    root = insertIn(root, 20);
    root = insertIn(root, 30);
    root = insertIn(root, 40);
     printf("Preorder traversal: ");
    preorderTraversal(root);

    printf("\nInorder traversal: ");
    inorderTraversal(root);

    printf("\nPostorder traversal: ");
    postorderTraversal(root);

    printf("\nLevel order traversal: ");
    levelorderTraversal(root);
    
    
 }
