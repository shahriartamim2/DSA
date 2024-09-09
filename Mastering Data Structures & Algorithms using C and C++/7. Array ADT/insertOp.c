#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int length;
    int size;
};

// void Append(struct Array *arr, int x){
//     arr->A[arr->length] = x;
//     arr->length++;
// }

void Insert(struct Array *arr, int index, int x)
{
    int i;
    for(i = arr->length; i>index; i--){
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length++;
}

void Display(struct Array *arr){
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
    arr.length = 7;
    for (i = 0; i < arr.length; i++)
    {
        arr.A[i] = i+1;
    };

    // Append(&arr, 9);
    Insert(&arr, 4, 9);
    Display(&arr);

    return 0;
};