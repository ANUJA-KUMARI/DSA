#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *left ;
    struct node *right;

};
int deletion_at_leaf_node(struct node *root , int key){
    if(root==NULL){
        return 0;
    }
    while(root!=NULL){
        if(root->data==key){
            if(root->left==NULL && root->right==NULL){
                int a=root->data;
                free(root);
                return a;
            }
        }else{
            if(root->data<key){
                root=root->right;
            }else if(root->data>key){
                root=root->left;
            }
        }
    }
    return 0;
}
int main(){
    return 0;
}