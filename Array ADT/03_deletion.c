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

int delete(struct ARR *arr, int index)
{
    int i;
    int a = arr->A[index];
    if (index >= 0 && index <= arr->length)
    {
        for (i = index; i < arr->length - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->length--;
        return a;
    }
    return 0;
}
int main()
{
    struct ARR arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 10, 6};
    printf("Deleted: %d \n", delete(&arr, 4));
    display(arr);
    return 0;
}
