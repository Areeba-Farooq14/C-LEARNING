#include<stdio.h>
int main(){
    int rows,cols;
    printf("Enter number of rows and columns: ");   
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];  
    int transpose[cols][rows];
    printf("Enter elements of the matrix:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<cols;i++){
        for(int j=0;j< rows;j++){
            transpose[i][j]=arr[j][i];
        }
    }
    printf("Transpose of the matrix is:\n");
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}