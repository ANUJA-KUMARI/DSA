#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node *right;
};
struct node* findMax(struct node* root)
{
    while (root->right != NULL) {
        root = root->right;
    }

    return root;
}
int deletion_of_internal_node(struct node *root , int key){
    if(root==NULL){
        return 0;
    }
    if(root->data==key){
        
        
        


    }
    if(root->data<key){
        deletion_of_internal_node(root->right , key);
    }else if(root->data>key){
        deletion_of_internal_node(root->left , key);
    }else{
        if(root->left==NULL&& root->right==NULL){
            int a =root->data;
            free(root);
            return 0;
        }
       if(root->left!=NULL&&root->right==NULL){
            struct node * ptr;
            ptr=root;
            int a=root->data;
            root=root->left;
            free(ptr);
            return 0;
            
        } 
        if(root->left==NULL&&root->right!=NULL){
            struct node * ptr;
            ptr=root;
            int a=root->data;
            root=root->right;
            free(ptr);
            return 0;
        }
        else
        {
            struct node* temp = findMax(root->left);

            root->data = temp->data;

            root->left = deletion_of_internal_node(root->left, temp->data);
        }
    }
}
int main(){
    return 0;
}