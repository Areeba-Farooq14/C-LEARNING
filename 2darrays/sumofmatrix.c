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
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("the sum of given matrix is %d",sum);



    return 0;
}