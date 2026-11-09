#include<stdio.h>
// void func(int arr[]){
//     arr[0]=100; //will change
// }
// void func2(int a){
//     a=100; //wont change
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int a=10;
//     printf("Before function call: %d\n",a);
//     printf("Before function call: %d\n",arr[0]);
//     func(arr);
//     func2(a);
//     printf("After function call: %d\n",a);     
//    printf("After function call: %d\n",arr[0]);

//     return 0;
// }

//swap
void swap(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
arr[1  ]=temp;

}
int main(){
    int arr[2]={10,20};
    printf("Before swapping: %d %d\n",arr[0],arr[1]);
    swap(arr);
    printf("After swapping: %d %d\n",arr[0],arr[1]);
}