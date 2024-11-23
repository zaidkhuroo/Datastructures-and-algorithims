#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p,*q;
    p = (int *)malloc(5 * sizeof(int));
    q = (int *)malloc(10 * sizeof(int));
    int i;

    p[0] = 1;
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 1;

    for (i=0; i < 5; i++)
        q[i] = p[i];
    free(p);
    p = q;
    q = NULL;

    for (i=0; i < 5; i++)
        printf("%d", p[i]);
    return 0;
}