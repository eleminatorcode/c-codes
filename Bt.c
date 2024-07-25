#include<stdio.h>
#include<stdlib.h>

struct btree{
    int data;
   struct  btree *right;
   struct btree*left;
};
typedef struct btree node;
void insert(node **tree ,int val){
    node * temp=NULL;
    if((*tree)==NULL){
      temp= (node *)malloc(sizeof(node));
      temp->data=val;
      temp->left=temp->right=NULL;
      *tree=temp;
      return;
    } 
    if(val>(*tree)->data){
        insert(&(*tree)->right,val);
    }
    if(val<(*tree)->data){
        insert(&(*tree)->left,val);
    }
}
void printPreorder(node*tree){
     if (tree == NULL) {
        return;
    }
    printf("%d ",(tree)->data);
    printPreorder((tree)->left);
    printPreorder((tree)->right);
    }
    void inOrder(node*tree){
     if (tree == NULL) {
        return;
    }
    
    inOrder((tree)->left);
    printf("%d ",(tree)->data);
    inOrder((tree)->right);
    }
    void postOrder(node*tree){
 if (tree == NULL) {
    return;
}
    
postOrder((tree)->left);
printPreorder((tree)->right);
 printf("%d ",(tree)->data);
}
void delete(node* tree){
    if(tree){
        delete((tree)->left);
        delete((tree)->right);
        free(tree);
    }
}
int main(){
    node* tree=NULL;
    insert(&tree,10);
    insert(&tree,15);
    insert(&tree,70);
    insert(&tree,45);
    insert(&tree,50);
    insert(&tree,30);
    printf("In PREORDER :");
    printPreorder(tree);
    printf("\n");
        printf("In INORDER :");
        inOrder(tree);
        printf("\n");
    printf("In POSTORDER :");\
    postOrder(tree);

    
    delete(tree);

}