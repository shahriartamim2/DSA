#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int length;
    int size;
};

void Append(struct Array *arr, int x)
{
    arr->A[arr->length] = x;
    arr->length++;
}

void Display(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->length; i++)
    {
        printf("%d\t", arr->A[i]);
    };
}

int main()
{
    struct Array arr;
    int i;
    arr.A = (int *)malloc(5 * sizeof(int));
    arr.length = 5;
    for (i = 0; i < arr.length; i++)
    {
        arr.A[i] = i + 1;
    };
    Append(&arr, 9);
    Display(&arr);

    return 0;
};