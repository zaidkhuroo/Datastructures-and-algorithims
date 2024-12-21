#include <stdio.h>
#include <stdlib.h>

struct ARR
{
    int A[20];
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

struct ARR *merge(struct ARR *arr1, struct ARR *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct ARR *arr3 = (struct ARR *)malloc(sizeof(struct ARR));
    while (i < arr1->length && j < arr2->length)
        if (arr1->A[i] < arr2->A[j])

            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = arr1->length + arr2->length;
    arr3->size = arr3->length;
    return arr3;
}
int main()
{
    struct ARR arr1 = {{1, 2, 3, 4, 5, 6, 7, 8}, 10, 8};
    struct ARR arr2 = {{9, 12, 34}, 10, 3};
    struct ARR *arr3;
    arr3 = merge(&arr1, &arr2);
    display(*arr3);
    free(arr3);
    return 0;
}
