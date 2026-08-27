#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int front;
    int rare;
    int *arr;
};
void enqueue(struct queue *ptr , int data){
    if((ptr->rare+1)%ptr->size == ptr->front){
        printf(" the queue isoverflow");
    }else{
        ptr->rare =(ptr->rare+1)%ptr->size  ;
        ptr->rare= data;

    }
}
int dequeue(struct queue *ptr){
    if(ptr->rare==ptr->front){
        printf(" queue is empty");
    }else{
        ptr->front=(ptr->front+1)%ptr->size;
        int a=ptr->arr[ptr->front];
        return a;
        
    }
}
int main(){
    
    return 0;
}
