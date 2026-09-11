//insertion at the leaf
//insertion in the binary search tree always happens at the leaf node by seaching the NULL child node by comparing the values in the node 
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node * right;
};
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
struct node *insertion(struct node *root , int key){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=key;
    ptr->left=NULL;
    ptr->right=NULL;
    if(root==NULL){
        root=ptr;
        return root;
    }
    if( search(root , key )){
        print("cannot insert the duplicate number , it already exist");
    }else{
        struct node *prv;
        prv=root;
         while(prv!=NULL){
            if(prv->data<key){
                if(!prv->right){
                    prv->right=ptr;
                    return root;
                }
                prv=prv->right;
            }else if(prv->left){
                if(!prv->left){
                    prv->left=ptr;
                    return root;
                }
                prv=prv->left;
            }
         }

    }
}
int main(){
    return 0;
}
