#include<stdio.h>
int main(){
// // int arr[5];

// // for(int i=0;i<5;i++){
// //     printf("Enter the element no %d: ", i+1);
// //     scanf("%d",&arr[i]);
// // }
// // for(int i=4;i>=0;i--){
// //     printf("%d ",arr[i]);
// // }
// int marks[5];
// for(int i=0;i<5;i++){
//     printf("Enter the marks of student no %d: ", i+1);
//     scanf("%d",&marks[i]);
// }
// for(int i=0;i<5;i++){
//     if(marks[i]>=50){
//         printf("passed students are: %d\n",i);
// }}
// return 0;

//reverse the array
//  

//marks of students
// int marks[5]= {20,18,50,45,10};
// for(int i=0;i<5;i++){
//     if(marks[i]<=20){
//         printf("failed student %d has scored %d marks\n",i,marks[i]);
//     }
// }

//output
// int sub[50],i;
// for(i=0;i<48;i++);{
//     sub[i]=i;
//     printf("%d ",sub[i]);
// }
//output 48

//product
// int n;
// int product=1;
// printf("Enter the number of elements: ");
// scanf("%d",&n);
// int arr[n];
// for(int i=0;i<=n-1;i++){
//     printf("Enter the element no %d: ", i+1);
//     scanf("%d",&arr[i]);
// }

// for(int i=0;i<=n-1;i++){
//     product*=arr[i];
// }
// printf("The product of the elements is: %d\n", product);

//Minimum element in an array
int arr[7]={19,4,2,18,9,5,12};
int min=arr[0];
for(int i=0;i<=6;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
printf("The minimum element is: %d\n", min);


return 0;
}


