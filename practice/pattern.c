// #include<stdio.h> //TABLE
// int main(){
//  for(int i=1;i<=10;i++){
//     for(int j=1;j<=10;j++){
//         printf("%3d ",i*j);
        

//     }
//     printf("\n"); 
//  }
// }

#include <stdio.h>

int main() { //FIBONACCI
    int n=9;
    int a = 0, b = 1, next;

    

    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}