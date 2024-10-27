#include<stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    int n=5;
    p=(int *) malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
    scanf("%d",&p[i]);
    }
     printf("The array in heap is: \n");
     for(int i=0;i<n;i++){
        printf("%d",p[i]);
     }
    return 0;
}