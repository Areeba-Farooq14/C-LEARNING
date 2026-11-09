#include<stdio.h>
int main(){
    // int arr1[2][2]={1,2,3,4};
    // int arr2[2][2]={5,6,7,8};
    // printf("\n");
    // int result[2][2];
    // for(int i=0;i<=1;i++){
    //     for(int j=0;j<=1;j++){
    //         result[i][j]=arr1[i][j]+arr2[i][j];
    //     }
    // }
    //  for(int i=0;i<=1;i++){
    //     for(int j=0;j<=1;j++){
    //         printf("%2d ",result[i][j]);
    //     }
    //       printf("\n");
    // }

// without using any extra variable

int arr1[2][2]={1,2,3,4};
    int arr2[2][2]={5,6,7,8};
     for(int i=0;i<=1;i++){
        for(int j=0;j<=1;j++){
            printf("%2d ",arr1[i][j]+arr2[i][j]);
        }
          printf("\n");
    }

  

}