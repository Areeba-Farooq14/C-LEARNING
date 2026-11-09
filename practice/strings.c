#include<stdio.h>
#include<string.h>
int main(){
int age;
printf("enter your age:");
scanf("%d",&age);
//string declearation
char name[30];
//include new line character
getchar();
printf("enter your full name:");
//function for string instead of scanf
// varname,sizeof(varname),stddin
fgets(name,sizeof(name),stdin);
//to remove extra spaces if the string condition is printing in first 
name[strlen(name)-1]='\0';
printf("%s\n",name);
printf("%d\n",age);
}