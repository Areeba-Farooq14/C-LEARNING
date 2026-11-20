#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        char name[50];
        int age;
        int noOfMatches;
        float avg;
    } cricketer;

    cricketer arr[3];
    for(int i=0; i<3;i++){
        gets(arr[i].name);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noOfMatches);
        scanf("%f",&arr[i].avg);

    }
    for(int i=0; i<3;i++){
        printf("Name: %s\n",arr[i].name);
        printf("Age %d\n",arr[i].age);
        printf("No of matches %d\n",arr[i].noOfMatches);
        printf("Average %f\n",arr[i].avg);

    }
}