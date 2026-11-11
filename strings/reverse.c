#include<stdio.h>   
#include<string.h>
int main(){
    
    char str[100];
    puts("Enter a string: ");
    gets(str);
    //size
    int size=0;
    int i=0;    
    while(str[i]!='\0'){
        size++;
        i++;
    }
    printf("Length of the string: %d\n", size);

    //reverse
    for(int i=0,j=size-1;i<j;i++,j--){
        char temp=str[i]; //temp=a(first)
        str[i]=str[j]; //a=last
        str[j]=temp; //last=temp(first)
    }
    printf("Reversed string: %s\n", str);
    return 0;

}