#include <stdio.h>
#include<stdlib.h>
struct stack{
    int *arr;
    int top;
    int size;
};
//IsEmpty function
int empty(struct stack *s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
//IsFull function
int full(struct stack *s){
    if(s->top==s->size){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    struct stack* s;
    s =(struct stack*)malloc(sizeof(struct stack));
    s->size=80;
    s->top=-1;
    s->arr=(int*) malloc(s->size * sizeof(int));
    empty(&s);
    full(&s);
    return 0;
}