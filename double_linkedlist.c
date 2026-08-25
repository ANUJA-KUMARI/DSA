#include <stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node * next;
    struct node * prev;

};

int main(){
   struct node *first , *second , *third;
   first=(struct node *)malloc(sizeof(struct node));
   second=(struct node *)malloc(sizeof(struct node));
   third=(struct node *)malloc(sizeof(struct node));
    first->data=23;
    first->next=second;
    first->prev=NULL;
    second->data=45;
    second->next=third;
    second->prev=first;
    third->data=67;
    third->next=NULL;
    third->prev=second;
    
   return 0;
}