#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no of rows and columns: ");
    scanf("%d %d",&r, &c);
    printf("enter all the elements\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%3d ",arr[i][j]);
        }
        printf("\n"); 
    }
    int max=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        if(max<arr[i][j]){
            max=arr[i][j];
        }
        }
    }
    printf("the max element is %d ",max);
//index no
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]==max){
                printf("the index of maximum element is [%d][%d]\n",i,j);
            }
        }
        printf("\n"); 
    }
    return 0;
}