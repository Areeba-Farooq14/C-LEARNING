#include<stdio.h>
int main(){
    int a=67;
    int *x=&a;
    int **y=&x;
    int ***z=&y;
    printf("%p\n",&x);
    printf("%p",y);
    printf("%p",z);
}