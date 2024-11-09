#include <stdio.h>
int fun(int a, int b)
{
    if (b == 0)
        return 1;
    return fun(a, b - 1) * a;
}

int fun2(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0)
        return fun2(a * a, b / 2);
    return a * fun2(a * a, (b - 1) / 2);
}

int main()
{
    int result;

    // result = fun1(2, 5);
    result = fun2(2, 5); //reduces time by half
    printf("Power: %d", result);
    return 0;
}