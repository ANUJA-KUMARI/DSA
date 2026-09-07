//traversal in non linear data structure : PreOrder , PostOrder , InOrder
#include<stdio.h>
#inlcude<stdlib.h>
strcut node {
    int data;
    struct node *left;
    struct node *right;
};

//PreOrder
void PreOrder(strcut node *root){
    if(root!=NULL){
        printf("%d" , root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }

}
//PostOrder
void PostOrder(strcut node *root){
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d" , root->data);
    }
}
//InOrder
void InOrder(struct node *root){
    if(root!=NULL){
        InOrder(root->left);
        printf("%d" , roo->data);
        InOrder(root->right);
    }
}
int main(){
    return 0;
}
