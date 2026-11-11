#include<stdio.h>
#include<string.h>
int main(){
    //strlen
    char* str="hello world";
    int x=strlen(str);
    printf("Length of the string: %d\n",x);

    //strcpy
    char str1[20]="hello world 1";
    char str2[20];
    strcpy(str2,str1);
    printf("String 1: %s\n",str1);
    printf("String 2: %s\n",str2);
    str2[0]='E'; //deep copy, changing str2 will not affect str1
    printf("String 2 after modification: %s\n",str2);

    //Strcat
    char str3[20]="hello ";  //[] will give error because it will not have enough space to store the concatenated string, so we need to give enough space to store the concatenated string
    char str4[20]="world";
    strcat(str3,str4);
    printf("Concatenated string: %s\n",str3);

    // char *s1="hello ";
    // char *s2="world";
    // strcat(s1,s2); //will give error because s1 is a pointer to a string literal, and string literals are stored in read-only memory, so we cannot modify them
    // printf("Concatenated string: %s\n",str3);    


    return 0;
}