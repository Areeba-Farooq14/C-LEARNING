#include<stdio.h>
#include<string.h>
int main(){
    char arr[]={'h','e','l','l','o','\0'};
    int i=0;    
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");

    char arr1[]="hello-world";
    int j=0;
    while(arr1[j]!='\0'){
        printf("%c",arr1[j]);
        j++;
    }
    printf("\n");

    char arr2[]="HELLLLLLLLLLLLLLLOOO WORLDDDDDDDDD LONGGGG TIMEEEEE NOOOOO SEEEEEEEEE \0"; //in initialization its not necessary to add null character at the end of string because it is automatically added by compiler
    int k=0;
    while(arr2[k]!='\0'){
        printf("%c",arr2[k]);
        k++;
    }
    printf("\n");

    puts("hello string");
    char arr3[50];
    // scanf("%s",arr3); //ONLY THE FIRST WORD WILL BE STORED IN THE ARRAY, IF THERE IS SPACE IT WILL NOT BE STORED
    // printf("%s",arr3); 

gets(arr3); //IT WILL STORE THE WHOLE STRING EVEN IF THERE IS SPACE IN BETWEEN  
//
    return 0;
}