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

int Duplicates(struct ARR *arr)
{
    int i, sum = 0, totalsum, missing, last = 0;
    int n = arr->A[arr->length - 1];

    for (i = 0; i < arr->length; i++)
    {

        if (arr->A[i] == arr->A[i + 1] && arr->A[i] != last)
        
            printf("%d \t", arr->A[i]);
        
        last = arr->A[i];
       
    }
}

int main()
{
    struct ARR arr = {{1, 3, 4, 4, 6, 7, 7, 7, 8, 8}, 10, 10};
    printf(" Duplicate numbers are: ");
    Duplicates(&arr);
    return 0;
}
