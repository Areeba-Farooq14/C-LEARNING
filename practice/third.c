#include<stdio.h>
int main(){
int num1,num2;
printf("enter a:");
scanf("%d",&num1);
printf("enter b:");
scanf("%d",&num2);
printf("old values %d,%d\n",num1,num2);
int swap;
swap=num1;
printf("new value of a %d\n",num2);
swap=num2;
printf("new value of b%d",num1);
return 0;
}