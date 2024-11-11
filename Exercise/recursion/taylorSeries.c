// taylor series using recursion

#include <stdio.h>
double fun(int a, int b)
{
    static double p = 1, f = 1;
    double res;
    if (b == 0)
        return 1;

    res = fun(a, b - 1);  //else part
    p = p * a;  //else part
    f = f * b;  //else part
    return res + p / f;  //else part
}
int main()
{
    printf("%lf", fun(7, 8));
    return 0;
}