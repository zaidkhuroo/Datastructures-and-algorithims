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

void append(struct ARR *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct ARR *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
    arr->A[index] = x;
    arr->length++;
}
int main()
{
    struct ARR arr = {{1, 2, 3, 4}, 10, 4};
    append(&arr, 12);
    insert(&arr, 2,34);
    display(arr);
    return 0;
}
