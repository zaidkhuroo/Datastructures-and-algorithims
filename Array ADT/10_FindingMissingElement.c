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

int search(struct ARR *arr)
{
    int i, sum = 0, totalsum, missing;
    int n = arr->A[arr->length - 1];

    for (i = 0; i < arr->length; i++)
    {

        sum = sum + arr->A[i];
    }
    totalsum = n * (n + 1) / 2;
    missing = totalsum - sum;
    return missing;
}

int main()
{
    struct ARR arr = {{1, 3, 4, 5, 6, 7, 8}, 10, 7};
    int result = search(&arr);
    printf("Missing Number: %d\n", result);
    return 0;
}
