#include <stdio.h>
#include <stdlib.h>
struct my_array{
   int totalsize;
   int usedsize;
   int *ptr;

 };
 void createarray(struct my_array *a , int tsize , int usize){
    (*a).totalsize=tsize;
    (*a).usedsize=usize;
    (*a).ptr = (int*)malloc(tsize * sizeof(int));

 }
 void show(struct my_array *a){
    for (int i=0 ;i<(*a).usedsize;i++){
        print("%d" , ((*a).ptr)[i]);

    }
 }
 void setvalue( struct my_array *a ){
    int n;
    for(int i=0;i<(*a).usedsize ;i++){
        print(" enter the value for %d th index" , i);
        scanf("%d" ,&n);
        ((*a).ptr)[i]=n;
    }
 }
int main(){
    struct my_array anuja;
    createarray(&anuja, 30 , 12);
    setvalue( &anuja);
    show(&anuja);
    return 0;
}