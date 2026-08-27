#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int front ;
    int rare;
    int *arr;
};
int dequeue(struct queue *p){
    if(p->front==p->rare){
        printf(" queue is empty");
    }else{
        p->front++;
        int a =p->arr[ p->front];
        return a;
    }
}
int main(){
    struct queue * p;
    p->size=10;
    p->front=-1;
    p->rare=2;
    p->arr=(int*)malloc(p->size* sizeof(int));
    return 0;
}
