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

int get(struct ARR *arr, int index)
{
    if (index >= 0 && index <= arr->length)
        return arr->A[index];
    return -1;
}

int set(struct ARR *arr, int index, int num)
{
    if (index >= 0 && index <= arr->length)
        arr->A[index] = num;
}

int max(struct ARR *arr)
{
    int max = arr->A[0];
    for (int i = 1; i < arr->length; i++)
        if (arr->A[i] > max)
            max = arr->A[i];
    return max;
}
int sum(struct ARR *arr)
{
    int count = 0;
    for (int i = 0; i < arr->length; i++) 
        count = count + arr->A[i];
    return count;
}

int min(struct ARR *arr)
{
    int min = arr->A[0];
    for (int i = 1; i < arr->length; i++)
        if (arr->A[i] < min)
            min = arr->A[i];
    return min;
}

int main()
{
    struct ARR arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 10, 8};
    set(&arr, 4, 9);
    printf("get: %d \n", get(&arr, 6));
    printf("max: %d \n", max(&arr));
    printf("min: %d \n", min(&arr));
    printf("Total Sum: %d \n", sum(&arr));
    display(arr);
    return 0;
}
