#include <stdio.h>
int setvalue(int arr[]  , int size){
    for (int i=0;i<size;i++){
        printf(" enter the value at inder %d of array" ,i);
        scanf("%d" , &arr[i]);
    }
    return 1;
}
int binarysearch(int arr[] , int size , int element){
    int low , mid , high;
    low=0;
    high=size-1;
    while(low<=high){
     mid=(low+high)/2;
     if(arr[mid]==element){
        return mid;
     }
     if(arr[mid]<element){
        low=mid+1;
     }
     else{
        high=mid-1;
     }
    }
    return 0;
}
int main(){
    int arr[10];
    setvalue(arr ,10);
    return 0;

}
