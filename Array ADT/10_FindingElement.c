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
    printf("Elements in array are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \t", arr.A[i]);
    }
}

int search(struct ARR *arr, int num)
{
    int i;

    for (i = 0; i < arr->length - 1; i++)
    {
        if (num == arr->A[i])

            return i;
    }
    return -1;
}

int main()
{
    struct ARR arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 10, 6};
    int result = search(&arr, 45);
    if (result == -1)
        printf("Number not found \n");
    else
        printf("Number found at index: %d\n", result);
    return 0;
}
