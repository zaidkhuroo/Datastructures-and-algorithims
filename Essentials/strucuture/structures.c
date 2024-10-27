#include <stdio.h>
struct card
{
    int shape;
    int color;
};
    int main()
{
    struct card c1[52]={{1,4},{5,98}};
    printf("%d %d \n",c1[0].shape,c1[0].color);
}