#include <stdio.h>

int sum(int x)
{
    return x * (x + 1) / 2;
}
int main()
{
    int a;
    a = sum(10);
    printf("Sum of first natural numbers is:  %d\n", a);
    return 0;
}