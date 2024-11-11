// taylor series using horner's rule using recursion

#include <stdio.h>
double fun(int a, int b)
{
    static double res=1;
    if (b == 0)
        return res;
    res = 1 + a* res/b;
    return fun(a, b - 1);
}
int main()
{
    printf("%lf", fun(9,103));
    return 0;
} 