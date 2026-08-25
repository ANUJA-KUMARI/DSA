#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
//TRAVERSAL OF THE CIRCULAR LINKED LIST
void traversal(struct node * head){
    struct node * ptr;
    ptr=head;
    do{
        printf("%d",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
}
//INSERTION IN CIRCULAR LINKED LIST
struct node * insertion(struct node * head , int data , int index){
    struct node *ptr =head;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;

    }
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=data;
    new->next=ptr->next;
    ptr->next=new;
    return head;
}
//DELECTION IN THE CIRCULAR LINKED LIST
struct node * delection(struct node* head , int index){
    struct node * ptr = head;
    for(int i=0;i<index-1;i++){
        ptr=ptr->next;

    }
    struct node *q=ptr->next;
    ptr->next=q->next;
    free(q);
    return head;
}
    int main(){
    struct node*head , *second , *third , *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=23;
    head->next=second;
    second->data= 5;
    second->next=third;
    third->data= 45;
    third->next= fourth;
    fourth->data=63;
    fourth->next=head;
    return 0;
}