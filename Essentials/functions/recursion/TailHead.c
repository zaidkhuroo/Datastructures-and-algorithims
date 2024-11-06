// head recursion
#include<stdio.h>

void fun(int x){
    if (x>0){
        fun(x-1);
        printf(" %d ", x);
    }
}

// tail recursion
void fun2(int x){
    if (x>0){
        
        printf(" %d ", x);
        fun2(x-1);
    }
}
int main(){
    int a=3;
    fun(a);
    printf("\n");
    fun2(a);
    return 0;
}