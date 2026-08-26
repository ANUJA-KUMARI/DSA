#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
//INSERSION AT THE BEGINNING
 struct node * insersion_beginning(struct node *head , int data){
    struct node *p;
    p=(struct node *) malloc(sizeof(struct node));
    p->data=data;
    p->next=head;
    head=p;
    return p;
     // call from main 
    // head=insersion_beginning(head, 10);
}
//INSERTION AT THE LAST
struct node * insertion_at_last( struct node *head , int data){
    struct node * ptr;
    ptr =(struct node *) malloc(sizeof(struct node));
     struct node * p=head;
    while(p->next!=NULL){
        p= p->next;
    }
    ptr->next= NULL;
    ptr->data=data;
    p->next=ptr;
    return head;
    // call from main 
    // head=insertion_at_last(head, 10);
}
//INSERTION IN BETWEEN(insert at this index)
struct node * insert_in_between(struct node * head , int data , int index){
    struct node *ptr= (struct node*)malloc(sizeof(struct node));
    struct node *p =head;
    for(int i=0 ;i<index;i++){
        p=p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
    //call from the main 
    //head=insert_in_between(head , 10, 5)
}
//INSERT AFTER A NODE(the address of the node is give)
struct node* insert_after_node(struct node* head , struct node*prv , int data){
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->next=prv->next;
    ptr->data=data;
    prv->next=ptr;
    return head;
    //call from the main function should be like this
    //head=insert_after_node(head , third, 34);
}
int main (){
    struct node *first, *second , *third;
    first= (struct node *) malloc(sizeof(struct node));
    second= (struct node *) malloc(sizeof(struct node));
    third= (struct node *) malloc(sizeof(struct node));
    first->data=1;
    first->next=second;
    second->data=9;
    second->next=third;
    third->data =89;
    third->next= NULL;
    return 0;
}