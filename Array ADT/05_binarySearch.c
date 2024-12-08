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

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int search(struct ARR *arr, int key)
{
    int i;
    int l, h, mid;
    l = 0;
    h = arr->length - 1;
    while(l<=h)
    {
        mid = (l + h) / 2;
        if (key == arr->A[mid])
            return mid;
        else if (key < arr->A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main()
{
    struct ARR arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 10, 8};
    int result = search(&arr, 8);
    if (result == -1)
        printf("Number not found \n");
    else
        printf("Number found at index: %d\n", result);
    return 0;
}
