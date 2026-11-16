#include<stdio.h>
void swapbyval(int a, int b){
    int temp =a;
    a=b;
    b=temp;
}
void swapbyadd( int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=5,y=9;
    swapbyval(x,y);
    printf("after swapbyval: x=%d , y=%d\n",x,y);
    swapbyadd(&x,&y);
    printf("after swapbyadd: x=%d , y=%d\n",x,y);
    return 0;
}