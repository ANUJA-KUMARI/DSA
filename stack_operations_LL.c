#include <stdio.h>
#include <stdlib.h>
struct node{
    int data ;
    struct node * next;
};
//PUSH OPERATION
struct node *push(struct node *top, int value){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        printf("stack is overflow");

    }else{
        p->data=value;
        p->next=top->next;
        p=top;
        return top;
    }
}
//POP OPERATION
struct node *pop(struct node * top){
    if(top==NULL){
        printf(" stack is empty");
        return NULL;
    }else{
        struct node *q =top;
        top=top->next;
        free(q);
        return top;
    }
}
//PEEK OPERATION
int peek(int position , struct node*top){
    struct node *ptr=top;
    for(int i=0;i<position-1&&ptr!=NULL;i++){
        ptr=ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
}
//STACK TOP
int stacktop(struct node*top){
    return top->data;
}
//STACK BOTTOM
int stackbottom(struct node*top){
    struct node*ptr=top;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    return ptr->data;
}
int main(){
    return 0;
}