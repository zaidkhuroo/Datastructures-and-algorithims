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

int search(struct ARR *arr, int num)
{
    int i;

    for (i = 0; i < arr->length - 1; i++)
    {
        if (num == arr->A[i])
            swap(arr->A[i], arr->A[i-1]);  // transposition technique: this will increase efficency of searching the element if it is searched once or for repeated times, more it is searched more its swapped with the previous elemnt and thus reaches at the starting index of the array and the goal is to have the time complexity as O(1);
            swap(arr->A[i], arr->A[0]);  // Move to front/Head: this will increase efficency of searching the element if it is searched once the element gets swapped with the starting element of the array thus the time complexity becomes O(1) if the same elemnt gets searched again.;
            return i;
    }
    return -1;
}

int main()
{
    struct ARR arr = {{1, 2, 3, 4, 5, 6, 7, 8}, 10, 6};
    int result = search(&arr, 45);
    if (result == -1)
        printf("Number not found \n");
    else
        printf("Number found at index: %d\n", result);
    return 0;
}
