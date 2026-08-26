#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node * next;

};
void traversal(struct node *a){
    while(a!=NULL){
        printf("%d", a->data);
        a=a->next;
    }
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