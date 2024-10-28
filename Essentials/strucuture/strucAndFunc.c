#include <stdio.h>

struct triangle
{
    int a;
    int b;
    int c;
};
// function to initialize values to the triangle using call by address
void initialize(struct triangle *t, int l, int m, int n)
{
    t->a = l;
    t->b = m;
    t->c = n;
    printf("\n Initializing: %d %d %d", l, m, n);
}

// function to calculate the perimeter of the triangle using call by value
int area(struct triangle t)
{
    return (t.a * t.b * t.c);
}

// function to change values to the triangle using call by address
void change(struct triangle *t, int l, int m)
{
    t->a = l;
    t->b = m;
}

int main()
{
    struct triangle t;
    initialize(&t, 20, 40, 60);
    int total = area(t);
    printf("\n Total area before changing value: %d", total);
    change(&t, 30,2);
    printf("\n Changed value: %d %d \n", t.a,t.b);
    int total_area = area(t);
    printf("Total area after changing value: %d", total_area);
    return 0;
}