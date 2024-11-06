#include <stdio.h>

int fun(int a)
{
    static int x = 0;
    if (a > 0)
    {
        x++;
        return (a - 1) + x;
    }
    return 0;
}

int main()
{
    int n = 4;
    int r = fun(n);
    printf("%d", r);
    return 0;
}