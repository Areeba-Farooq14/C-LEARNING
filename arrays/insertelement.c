#include<stdio.h>
int main(){
    int arr[5]={0,1,3,4,5};
    int new,pos;
    new=67; pos=3;
    // printf("Enter the element to be inserted: ");
    // scanf("%d",&new);
    // printf("Enter the position you want the value on");
    // scanf("%d",&pos);
    arr[5+1]; //new space 
    for(int i=5;i>pos;i--){ //5>3->yes ,     4>3->yes ---loop ends
        arr[i]=arr[i-1];    //arr[5]=arr[4], arr[4]=arr[3] 
    }                       // it means the value on arr[4] is shifted to arr[5] ->
    arr[pos]=new;
    for(int i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }


}