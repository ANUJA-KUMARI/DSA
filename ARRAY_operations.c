#include <stdio.h>
#include <stdlib.h>
struct myarray{
    int totalsize;
    int usedsize;
    int *ptr;
};
void createarray(struct myarray *a , int tsize , int usize){
    (*a).totalsize=tsize;
    (*a).usedsize=usize;
    (*a).ptr = (int*)malloc(tsize * sizeof(int));
}
void setvalue(struct myarray *a){
    int n;
    for (int i=0;i<a->usedsize;i++){
      printf(" enter the %d th element" , i);
      scanf("%d" , &n);
      (a->ptr)[i] =n;
    }
}
//TRAVERSAL
void traversal(struct myarray *a  ){
    printf(" the array elements are");
    for (int i=0;i<a->usedsize;i++){
      printf("%d/n" , (a->ptr)[i]); 
    }
}
//DELETION(if order does matter)
void delection(struct myarray *a ){
    int n;
    int t= (a->usedsize)-1;
    printf(" enter the index u wanna delete");
    scanf("%d", &n);
    if(n<0|| n>a->usedsize){
        print("error");
    }
    (a->ptr)[n]=(a->ptr)[t];
    a->usedsize--;
}
//DELECTION (if order matters)
void delection_order( struct myarray *a ){
    int n; 
    printf(" enter the index u wanna delete");
    scanf("%d", &n);
    if(n<0|| n>a->usedsize){
        print("error");
    }
    while(n<a->usedsize-1){
       ( a->ptr)[n]=(a->ptr)[n+1];
       n++;
    }
    a->usedsize--;
}
//INSERTION
void insertion( struct myarray *a){
    int n;
    printf(" enter the value of element you wanna add in the array");
    scanf("%d" , &n);
     int i=a->usedsize;
    (a->ptr)[i]=n;
    a->usedsize++;
}
//SEARCHING
void searching(struct myarray *a){
    int x;
    printf(" enter the element value you wanna search");
    scanf("%d" , &x);
    for(int i=0;i<a->usedsize;i++){
        if(x==(a->ptr)[i]){
            printf(" the element found at inderx %d" , i);
        }       
    }
    printf(" no element found");

}
int main(){
    struct myarray arr;
    createarray(&arr ,10 ,5);
    setvalue(&arr);
    traversal(&arr);
    return 0;
}
