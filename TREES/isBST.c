#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node *right;

};
int issBST(struct node *root , int min , int max){
    if(root==NULL){
        return 1;
    }
    if(root->data<=min || root->data>= max){
        return 0;
    }
    return issBST(root->left , min , root->data) && issBST(root->right , root->data , max);
}
int main(){
    struct node *root , *left1 , *left2 , *left3 , *right1, *right2 , *right3;

}