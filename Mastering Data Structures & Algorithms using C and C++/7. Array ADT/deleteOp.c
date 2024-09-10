#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int length;
    int size;
};

void Display(struct Array *arr)
{
    int i;
    for (i = 0; i < arr->size; i++)
    {
        printf("%d\t", arr->A[i]);
    };
}
int Delete(struct Array *arr, int index){
    int i,x ;
    if(index>=0 && index<arr->length){
        x = arr->A[index];
        for(i=index; i<=arr->length-1; i++){
            arr->A[i] = arr->A[i+1];
            
        }
        return x;
    }
    return 0;
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
        arr.A[i] = i + 1;
    };
    printf("%d\n", Delete(&arr, 4));
    Display(&arr);

    return 0;
};