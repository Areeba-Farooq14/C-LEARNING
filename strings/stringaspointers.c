#include<stdio.h>
#include<string.h>
int main(){
char str[]="hello world";

char *ptr=str; //pointer to string str[0]
//string works same as array of characters
printf("%p\n",ptr); //address of str[0]
printf("%p\n",&str[0]); //address of str[0]
 //print with loop
int i=0;
while(*ptr!='\0'){
    printf("%c",*ptr);
    ptr++; //increment pointer to point to next character 
    i++;
}
//initialization
char *ptr1="hello world"; //pointer to string literal
printf("%s\n",ptr1); 
printf("%c\n",*ptr1); //print first character of string

//change entire string
ptr1="hello world changed"; //change pointer to point to new string literal
printf("%s\n",ptr1);

//to change single char
char str1[]="hello world";
char *p=str1; //pointer to string str1[0]
*p='E'; //change first character of string
printf("%s\n",str1); //print entire string
//change single character using pointer arithmetic
}