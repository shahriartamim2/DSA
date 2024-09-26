#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int length;
    int size;
};

void Insert(struct Array *arr, int x)
{
    int i = arr->length;
    while(arr->A[i]>x){
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i] = x;
    arr->length++;
}

void Display(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->size; i++)
    {
        printf("%d\t", arr->A[i]);
    };
}

int main()
{
    struct Array arr;
    int i;
    arr.A = (int *)malloc(10 * sizeof(int));
    arr.size = 10;
    arr.length = 9;
    for (i = 0; i < arr.length; i++)
    {
        arr.A[i] = 4*i;
    };

    Insert(&arr, 9);
    Display(&arr);

    return 0;
};