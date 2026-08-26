#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
//DELETION OF THE HEAD NODE
struct node * delete_headNode(struct node* head){
    struct node*ptr;
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
    //if head==NULL , it will crash
}
//DELECTION OF THR NODE IN BETWEEN(index is given)
struct node*delection_in_between(struct node *head , int index){
    struct node*p =head;
    for(int i=0;i<index-1;i++){
        p=p->next;
    }
    struct node*q;
    q=p->next;
    p->next=q->next;
    free(q);
    return head;
    // if index=0 , then it will delete the head node
}
//DELECTION OF THE LAST NODE
struct node* delectio_of_last_node(struct node*head){
     struct node *p , *q;
     q=head;
     while (q->next!=NULL){
        q=q->next;
     }
     p=head;
     while(p->next!=q){
       p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
    //does NOT work correctly if there is only one node.
}
// DELECTION AFTER THE NODE(THE ADDRESS OF THE NODE IS GIVEN)
struct node *delection_after_node(struct node* head , struct node *prv){
    struct node *ptr;
    ptr=prv->next;
    prv->next=ptr->next;
    free(ptr);
    return head;
    //f prv is the last node?
}
//DELECTION OF THE NODE WITH GIVEN VALUE
struct node * dekectio_of_node_with_given_value(struct node* head , int value){
    struct node *p =head;
    while(p->data!=value){
        p=p->next;
    }
    struct node *q=head;
    while(q->next!=p){
        q=q->next;
    }
    q->next=p->next;
    free(p);
    return head;
    //what if the value doesnt exist?
    //what if the value is in head node?
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