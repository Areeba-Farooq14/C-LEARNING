#include<stdio.h>
#define size 10
int main(){
int arr[size], total=0 ,i=0 ,x;
printf("enter score neg no to stop..\n");
while(i<size){
    printf("enter score of player %d ",i+1);
    scanf("%d",&x);
    if(x<0) break;
    arr[i]=x;
    total+=x;
    i++;
}
if(i==size){
    printf("array is full\n");
}
if(i>0){
    int avg=total/i;
    printf("average =%d",avg);
}
else printf("no score is entered");
}