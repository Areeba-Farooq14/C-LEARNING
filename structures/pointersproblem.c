// int* x,y; //comp read it as int *x and int y
//  if we print it will show error,  to solve this we use type def
#include <stdio.h>
typedef int* pointer;
int main()
{
    int x = 5, y = 4;
    pointer a = &x, b = &y;
    printf("%p\n", a);
    printf("%p\n", b);
}
