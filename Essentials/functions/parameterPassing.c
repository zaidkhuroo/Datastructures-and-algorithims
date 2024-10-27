// call by value
#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    x = temp;
    x = y;
    y = temp;
}

void swap2(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(a, b);
    printf("Swap1: %d %d", a, b);// swap will be not performed as the actual parameters won't be able to make changes to the formal parameters.
    swap2(&a, &b);
    printf("Swap2: %d %d", a, b);
      
}
