#include <stdio.h>
#include <stdlib.h>
struct stack{
    int *arr;
    int top;
    int size;

};
//PUSH FUNCTION
 struct stack* push(struct stack* s , int value ){
    if(s->top==s->size-1){
        printf(" stack overflow , now no more element can be pushed in the stack");
        return NULL;
    }else{
        s->top++;
        s->arr[s->top]=value;
        printf(" the updated value of top is %d" , s->top);
        return s ;
    }
}
//POP FUNCTION
struct stack * pop( struct stack * s){
    if(s->top==-1){
        printf(" the stack is empty nothing to pop");
        return NULL;
    }else{
        int a= s->arr[s->top];
        s->top--;
        printf(" the updated value of top is %d" , s->top);
        printf(" the poped elemnt is %d" , a);
        free(a);
        return s;
    }
}
//PEEK OPERATION
int peek(struct stack*s , int i){
    if(s->top-i+1<0){
        printf(" invalid");
        return 0;
    }else{
        printf("the value at position %d is %d" , i , s->arr[s->top-i+1]);
        return s->arr[s->top-i+1];
    }
}
//STACK BOTTOOM
int stackbottom(struct stack * s){
    return s->arr[0];
}
//STACK TOP
int stacktop(struct stack * s){
    return s->arr[s->top];
}
int main(){
    struct stack * s;
    s=(struct stack* )malloc(sizeof(struct stack));
    s->size = 80;
    s->top=-1;
    s->arr=(int*)malloc(s->size *sizeof(int));
    return 0;
}