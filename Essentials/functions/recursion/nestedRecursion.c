#include <stdio.h>

int myfun(int x)
{
    if (x > 100)
        return x - 10; //return of if part
        return myfun(myfun(x + 11)); //return of else part
}
int main(int n)
{
    n = myfun(100);
    printf("%d", n);   
    return 0;
}