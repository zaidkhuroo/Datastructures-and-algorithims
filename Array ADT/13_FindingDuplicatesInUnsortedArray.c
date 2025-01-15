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

void Duplicates(struct ARR *arr1) {
    int i,j;
    int max = arr1->A[arr1->length - 1]; // Find the maximum value in arr1


    printf("\nDuplicate numbers are:\n");
    for (i = 0; i <= max; i++) {
        for (i = 0; i <= max; i++){
            
        }
        if (arr1->A[i] == i) {
            printf("Duplicates are: \n", i, arr1->A[i]);
        }
    }
}

int main()
{
    struct ARR arr1 = {{1, 1, 3, 4, 4, 6, 7, 7, 8, 8}, 10, 10};
    display(arr1);
    Duplicates(&arr1);
    return 0;
}
