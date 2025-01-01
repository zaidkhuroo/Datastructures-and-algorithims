#include <stdio.h>
#include <stdlib.h>
//  Finding Duplicates in Sorted Array using Hashing
struct ARR
{
    int A[10];
    int size;
    int length;
};
void display(struct ARR arr)
{
    int i;
    printf("Elements in array are: \t");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d \t", arr.A[i]);
    }
}

void Duplicates(struct ARR *arr1, struct ARR *arr2) {
    int i;
    int max = arr1->A[arr1->length - 1]; // Find the maximum value in arr1

    for (i = 0; i <= max; i++) {
        arr2->A[i] = 0;
    }

    for (i = 0; i < arr1->length; i++) {
        arr2->A[arr1->A[i]]++;
    }

    printf("\nDuplicate numbers are:\n");
    for (i = 0; i <= max; i++) {
        if (arr2->A[i] > 1) {
            printf("%d appears %d times\n", i, arr2->A[i]);
        }
    }
}

int main()
{
    struct ARR arr1 = {{1, 1, 3, 4, 4, 6, 7, 7, 8, 8}, 10, 10};
    struct ARR arr2 = {{0}, 10, 10};
    display(arr1);
    Duplicates(&arr1, &arr2);
    return 0;
}
