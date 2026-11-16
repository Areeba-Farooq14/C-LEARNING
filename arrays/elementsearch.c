#include<stdio.h>
int main(){
    int arr[5]={0,1,3,4,5};
    int found=0 ,x;
    printf("enter the element you want to search");
    scanf("%d",&x);
    for(int i=0;i<=4;i++){
        if(arr[i]==x){
            found=1;
            break;
        }}
        if(found==1){
            printf("element found ");}
        else{
            printf("not found");
        }
    }