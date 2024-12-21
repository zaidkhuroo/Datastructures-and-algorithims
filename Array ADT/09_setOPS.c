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
    printf("Elements in array are:\t ");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \t", arr.A[i]);
    }
    printf("\n");
}

struct ARR *Union(struct ARR *arr1, struct ARR *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct ARR *arr3 = (struct ARR *)malloc(sizeof(struct ARR));
    while (i < arr1->length && j < arr2->length)
        if (arr1->A[i] < arr2->A[j])

            arr3->A[k++] = arr1->A[i++];
        else if (arr2->A[j] < arr1->A[i])
            arr3->A[k++] = arr2->A[j++];
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }

    for (; i < arr1->length; i++)
        arr3->A[k++] = arr1->A[i];
    for (; j < arr2->length; j++)
        arr3->A[k++] = arr2->A[j];
    arr3->length = k;
    arr3->size = arr3->length;
    return arr3;
}

struct ARR *Inter(struct ARR *arr1, struct ARR *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct ARR *arr3 = (struct ARR *)malloc(sizeof(struct ARR));
    while (i < arr1->length && j < arr2->length)
        if (arr1->A[i] < arr2->A[j])
           i++;
        else if (arr2->A[j] < arr1->A[i])
           j++;
        else
        {
            arr3->A[k++] = arr1->A[i++];
            j++;
        }

    
    arr3->length = k;
    arr3->size = arr3->length;
    return arr3;
}

int main()
{
    struct ARR arr1 = {{1, 3, 5, 6, 7, 8,9}, 10, 7};
    struct ARR arr2 = {{2, 4, 5, 6,7}, 10, 5};
    struct ARR *arr3;
    arr3 = Union(&arr1, &arr2);
    display(*arr3);
    arr3 = Inter(&arr1, &arr2);
    display(*arr3);
    free(arr3);
    return 0;
}
