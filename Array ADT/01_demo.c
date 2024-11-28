#include <stdio.h>
#include <stdlib.h>

struct ARR
{
    int *A;
    int size;
    int length;
};
void display(struct ARR arr)
{
    int i;
    printf("Elements in array are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \t", arr.A[i]);
    }
}
int main()
{

    // dynamic array created in heap, with the size of the array given at the runtime by user
    struct ARR arr;
    int n, i;
    printf("size of array");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    

    printf("Enter the number of numbers in array: ");
    scanf("%d", &n);
    arr.length = n;

    printf("Enter elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr.A[i]);
    }

    printf("\n");
    display(arr);
    return 0;
}
