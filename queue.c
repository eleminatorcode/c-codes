#include<stdio.h>
#include<stdbool.h>
#define Max_size 100
typedef struct {
    int item [ Max_size];
    int front;
    
    int rear;

} queue;      

void initializequeue(queue* q){
    q->front=-1;
    q->rear=0;
}
bool isempty(queue* q){
    return (q->front==q->rear-1);
}
bool isfull(queue * q){
 return (q->rear==Max_size); 
}
void enqueue(queue* q, int value){
    if(isfull(q)){
        printf("Queue is full \n");
        return;
    }
    q->item[q->rear]=value;
    q->rear++;

}

void dequeue(queue* q){
    if(isempty(q)){

        printf("queue is empty \n");
        return ;
    }
    q->front++;
}
int peek(queue* q){
    if(isempty(q)){
        printf("Queue is empty\n");
        return -1;
    }

    return q->item[q->front+1];
}

void printqueue(queue* q){
    if(isempty(q)){
        printf("Queue is Empty\n");
        return;
    }
    for(int i=q->front+1;i<q->rear;i++){
        printf("%d ",q->item[i]);
    }
    printf("\n");
}

int main(){
    queue q;
    initializequeue(&q);
    enqueue(&q,10);
    enqueue(&q,55);
    enqueue(&q,90);
    enqueue(&q,80);
    enqueue(&q,77);
    printqueue(&q);
    dequeue(&q);
    printqueue(&q);
    return 0;
}