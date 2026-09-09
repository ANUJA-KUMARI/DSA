#include<stdio.h>
#include<stdlib.h>
struct node {
    int data ;
    struct node *left;
    struct node *right;
};
//RECURSIVE
int search(struct node * root , int key ){
    if(root==NULL){
        return 0;
    }
    if(root->data==key){
        return 1;
    }
    if(root->data<key){
       return  search(root->right , key);
    }else if(root->data>key){
        return search(root->left , key);
    }
    
}
//ITERATIVE
int search_iterative(struct node * root , int key){
    while (root!=NULL){
        if(root->data==key){
            return 1;
        }else if (root->data<key){
            root=root->right;
        }else{
            root=root->left;
        }
    }
    return 0;
}
int main(){

}
