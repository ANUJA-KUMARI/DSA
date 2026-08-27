#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int F;
    int R;
    int *arr;
};
void enqueue(struct queue * q , int data){
   if(q->R!=q->size-1){
           q->R++;
           q->R=data;

   }
}
int main(){
     struct queue *p;
     p->size=10;
     p->F=-1;
     p->R=-1;
     p=(int *) malloc(p->size * sizeof(int));
    return 0;
}
