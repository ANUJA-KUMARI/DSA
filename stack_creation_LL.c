#include <stdio.h>
#include <stdlib.h>
struct node{
    int data ;
    struct node * next;
};
//STACK IS FULL FUNCTION
int isfull(struct node * top){
     struct node *ptr;
     ptr = (struct node *)malloc(sizeof(struct node));
     if(ptr==NULL){
        return 1;
     }else{
        return 0;
     }
    }
//STACK IS EMPTY FUNCTION
int isempty(struct node *top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    return 0;
}