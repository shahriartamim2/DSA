#include <stdio.h>

struct Array
{
    int A[10];
    int length;
};

void Reverse(struct Array *arr )
{
    int i, j, temp;
    for(i=0, j=arr->length; i<j; i++, j--){
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
};

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6, 8, 9, 11, 15, 18}, 9};

    Reverse(&arr);
    int i;
    printf("\n");
    for(i=0; i<arr.length-1; i++){
        printf("Array element%d\t", arr.A[i]);
    };
    return 0;
}