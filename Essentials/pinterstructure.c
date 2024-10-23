#include<stdlib.h>
#include<stdio.h>
struct triangle
{
    int a,b,c;
};
int main(){
    struct triangle *t;
   t=(struct triangle*)malloc(sizeof(struct triangle));  // creating object of type structure in heap
    t->a=10;
    t->b=20;
    t->c=60;
    printf("Sides of Triangle are: %d %d %d\n",t->a,t->b,t->c);
} 