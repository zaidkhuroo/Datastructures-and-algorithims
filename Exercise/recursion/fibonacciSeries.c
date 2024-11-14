#include <stdio.h>

// recursive method
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 2) + fib(n - 1);
}

// by memoziation method
int r[10];
int fib2(int n)
{
    if (n <= 1)
    {
        r[n] = n;
        return n;
    }
    else
    {
        if (r[n - 2] == -1)

            r[n - 2] = fib2(n - 2);

        if (r[n - 1] == -1)

            r[n - 1] = fib2(n - 1);
        return r[n - 2] + r[n - 1];
    }
}
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        r[i] = -1; // filling the array with -1

    // printf("%d", fib(5));
    printf("%d", fib2(6)); 
    return 0;
}