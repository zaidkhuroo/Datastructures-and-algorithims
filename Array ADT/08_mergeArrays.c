#include <stdio.h>
#include <stdlib.h>

struct ARR
{
    int A[10];
    int size;
    int length;
};
void display(struct ARR arr)
{
    int i;
    printf("Reverse Elements in array are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \t", arr.A[i]);
    }
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int reverse(struct ARR *arr)
{
    int i, j;
    int *B;

    B = (int *)malloc(arr->length * sizeof(int));
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}

int reverseSwap(struct ARR *arr)
{
    int i, j,k;
    while(i<arr->length)
}

int main()
{
    struct ARR arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 10, 8};
    struct ARR arr2 = {{19,12,34}, 5, 3};  
    reverse(&arr);

    display(arr);
    reverseSwap(&arr);
    printf(" \n With swap \n");
    display(arr);
    return 0;
}
