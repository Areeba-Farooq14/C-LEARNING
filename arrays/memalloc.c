#include<stdio.h>
int main(){
    int n;
    printf("how many maarks");
    scanf("%d",&n);
    int*marks=malloc(n*sizeof(int));
    if(marks==NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    int total=0;
    for(int i=0;i<n;i+1){    printf("mark %d ",i+1);
    scanf("%d",&marks[i]); 
    total+=marks[i];}

    printf("avg =%.3f\n",(float)total/n);

    free(marks);
    marks=NULL;
    return 0;


}