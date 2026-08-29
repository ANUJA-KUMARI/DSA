#include <stdio.h>
#include <stdlib.h>
struct queue{
    int data;
    struct queue *next;
};
void enqueue( struct queue **front , struct queue **rare, int data){
     struct queue *temp;
     temp= (struct queue *)malloc(sizeof(struct queue));
     if(temp==NULL){
        printf("queue is full");
        return;
     }
     temp->data =data;
     temp->next=NULL;
     if(front ==NULL){ 
        *front = temp; 
        *rare =temp;
     }else{
        (*rare)->next=temp;
        *rare=temp;
     }
      
}
int dequeue(struct queue **front , struct queue **rare){
    int a;
    struct queue *p;
    
}
int main(){
    struct queue *rare;
    struct queue *front;
     enqueue(&front, &rare, 4);
    enqueue(&front, &rare, 34);
    enqueue(&front, &rare, 223);
    enqueue(&front, &rare, 6);

    return 0;
}
