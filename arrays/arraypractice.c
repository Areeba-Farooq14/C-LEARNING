
#include<stdio.h>
int main(){
    //if index is even element+10 if index is odd *2
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // for(int i=0;i<=9;i++){
    //     if(i%2==0){
    //         arr[i]+=10;
    //     }
    //     else{
    //         arr[i]*=2;
    //     }
    // }
    // for(int i=0; i<=9; i++){
    //     printf("%d ",arr[i]);
    // }

    //count no of elements greater than x

    // int arr[10]={1,2,3,4,5,6,7,8,9,10} , x, count=0;
    // printf("enter x\n");
    // scanf("%d",&x);
    // for(int i=0;i<=9;i++){
    //     if(arr[i]>x){
    //         count++;
    //         printf("%d ",arr[i]); //to print those elememts
    //     }

    // }
    // printf("\nno of elements greater than %d are %d",x,count);


//difference of sum of even indices and sum of odd indices
// int arr[7]={1,2,3,4,5,6,7}, sumeven=0 , sumodd=0;
// for(int i=0;i<=6;i++){
//     if(i%2==0){
//         sumeven+=arr[i];
       
//     }
//     else{
//         sumodd+=arr[i];
       
//     }
//      printf("%d\n",sumeven);
//       printf("%d\n",sumodd);
// }
// printf("diff is %d",sumeven-sumodd);

//element pair =x
// int arr[7]={1,2,3,4,5,6,7};
// int x , count=0;
// printf("enter x");
// scanf("%d",&x);
// for(int i=0;i<=6;i++){
//     for(int j=i+1;j<=6;j++  ){
//     if(arr[i]+arr[j]==x){
//         count++;
       
//     }
// }
// }printf("%d",count);

//second lrgest el 

// #include<limits.h>
// int main(){

// int arr[7]={1,2,3,4,5,6,6};
// int max=INT_MIN;
// int smax=INT_MIN;
// for(int i=0;i<=6;i++){
//     if(max<arr[i]){
//         smax=max; //smax is now previous max
//         max=arr[i]; //max is now a new max
//     }                      //forr repeaating elements
//     else if(smax<arr[i] && max!=arr[i]){ //max>arr[i]
//         smax=arr[i];
//     }
// }    

// printf("second largest %d",smax);

// reverse copy

//palindrome
// int arr[7]={1,6,3,4,3,6,1};
// int ispalindrome=1;
// for(int i=0,j=6;i<=j;i++,j--){
//     if(arr[i]!=arr[j]){
//         ispalindrome=0;
//         }}
//         if(ispalindrome==1){
//             printf("palindrome");
//         }
//         else{
//             printf("not palindrome");}

   

 
//             return 0; 
        
// }




return 0;
}