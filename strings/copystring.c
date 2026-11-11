#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="hello";
    // char *s2=s1; //pointer to string s1[0]
    // s1[0]='E';
    // printf("%s\n",s1); //print entire string
    // printf("%s\n",s2); //print entire string
    //s2 is shallow copy of s1, it points to the same memory location as s1, so when we change the first character of s1, it also changes the first character of s2.

    //deep copy
    printf("Deep copy\n");
    char s2[]="hello world ";
    s2[0]='E';
    printf("%s\n",s1); //print entire string
    printf("%s\n",s2); //print entire string
}