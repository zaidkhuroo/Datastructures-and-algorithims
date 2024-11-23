#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *p;
    int i;
    p = (int *)malloc(5 * sizeof(int));

    p[0] = 9;
    p[1] = 9;
    p[2] = 9;
    p[3] = 9;
    p[4] = 9;
printf("Static array: ");
    for (i = 0; i < 10; i++)
    
        printf(" %d", a[i]);
    
    printf("\n");
    printf("Dynamic array: ");
    for (i = 0; i < 5; i++)
    
        printf(" %d", p[i]);
    
    return 0;
}