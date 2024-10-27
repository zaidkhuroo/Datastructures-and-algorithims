#include<stdio.h>
 struct square
 {
    int a;
    int b;
 };

 int fun(struct square x){ // separate object will be created (copy of r->x)
    x.a++; // this won't make changes to the actual parameters.
    return x.a * x.b; // accessing values of structure by .
 }

 int main(){
    struct square r={10,30};
    printf("Area of square: %d",fun(r));
 }

//  any changes made to formal parameters will not affect actual parameters
