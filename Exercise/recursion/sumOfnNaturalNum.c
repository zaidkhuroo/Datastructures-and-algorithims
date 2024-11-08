#include <stdio.h>

int sum(int x)
{
    return x * (x + 1) / 2;
}

// by recursion
int sum2(int x)
{
    if (x == 0)
        return 0;
    return sum2(x - 1) + x;
}

int main()
{
    int a, b;
    a = sum(10);
    b = sum2(10);
    printf("Sum of first 10 natural numbers is:  %d\n", a);
    printf("Sum of first 10 natural numbers by recursion is:  %d\n", b);
    return 0;
}