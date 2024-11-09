#include <stdio.h>

int fact(int a)
{
    if (a == 0)
        return 1;
    return fact(a - 1) * a;
}

int fact2(int a)
{
    int f = 1;
    for (int i = 1; i <= a; i++)
        f = f * i;
    return f;
}
int main()
{
    int n;
    n = fact(5);
    // n=fact2(-70)  //prints 1 as result
    printf("%d", n);
    return 0;
}