#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter rows and cols");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols]; //r*c elements
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("enter element ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the elements are\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}