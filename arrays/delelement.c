//deleting an element from array, the logic is to shift the elements after the deleted element to the left by one position
//imagine we del element at index 2, then the element at index 3 will be shifted to index 2, the element at index 4 will be shifted to index 3 and so on
#include<stdio.h>
int main(){
    int arr[5]={2,3,5,8,4};
    int del;
    printf("enter the position you want to del ");
    scanf("%d",&del);
    for(int i=del; i<4; i++){
        arr[i]=arr[i+1];
        
    }
    for(int i=0;i<4;i++){
        printf("%d ",arr[i]);
    }
}