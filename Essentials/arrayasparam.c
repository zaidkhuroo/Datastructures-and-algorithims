#include <stdio.h>
#include <stdlib.h>

int *fun(int n)
{
    int *p;
    p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1; // Store values in the array
    }

    return p;
}
int main()
{   
    int *x;
    x = fun(5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]); 
    }
}
