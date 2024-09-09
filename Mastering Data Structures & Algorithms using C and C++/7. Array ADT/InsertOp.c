#include<stdio.h>
#include <stdlib.h>

struct Array {
    int *A;
    int length;
    int size;
};

int main(){
    struct Array arr;
    int i;
    arr.A = (int *)malloc(5*sizeof(int));
    arr.length =5;
    printf("Enter array element:\n");
    for (i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    };
    arr.A[5] = 15;
    arr.length++;
    for(i=0; i<arr.length; i++){
        printf("%d", arr.A[i]);
    };
    return 0;

};