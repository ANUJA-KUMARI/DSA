#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *left ;
    struct node *right;

};
int main(){
    struct node *p1 ,*p2 , *p3;
    p1=(struct node *)malloc(sizeof(struct node));
    p2=(struct node *)malloc(sizeof(struct node));
    p3=(struct node *)malloc(sizeof(struct node));
    p1->left=p2;
    p1->right=p3;
    p1->data=7;
    p2->left=NULL;
    p2->right=NULL;
    p2->data=889;
    p3->data=347;
    p3->left=NULL;
    p3->right=NULL;

}