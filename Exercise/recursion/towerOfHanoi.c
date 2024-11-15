#include <stdio.h>

void tower(int n, int a, int b, int c)
{
    if (n > 0)
    {
        tower(n - 1, a, c, b);
        printf("move from %d to %d \n", a, c); // this will print pairs // this will print pairs
        tower(n - 1, b, a, c);
    }

}

int main()
{
    tower(5,1,2,3);
    return 0;
}