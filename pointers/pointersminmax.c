#include<stdio.h>
//cannot return two values from A func
void minmax(int arr[],int n, int *min, int *max){
    *min=*max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<*min) *min=arr[i];
        if(arr[i]>*max) *max=arr[i];

    }
}
int main(){
    int data[]={10,20,30,40,50,60};
    int lo,hi;
    minmax(data, 6,&lo,&hi);
    printf("min %d , max %d\n",lo,hi);
}