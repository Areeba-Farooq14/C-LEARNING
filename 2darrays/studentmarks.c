#include<stdio.h>
int main(){
    int arr[5][5 ]={{1,2},{3,4},{5,6},{7,8}};
    for(int i=0;i<=3;i++){
        for(int j=0;j<=1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 


    return 0;

}