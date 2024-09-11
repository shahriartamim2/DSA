#include<stdio.h>

struct Array{
    int A[10];
    int length;
}; 

int LinearSearch(struct Array *arr, int key){
    int i;
    for (i = 0; i < arr->length; i++){
        if(key == arr->A[i])
        {
            return i;
        }
    }
    return -1;
}; 

int main(){
    struct Array arr = {1,2,3,4,5,6,7,8,9};
    arr.length = 9;

    printf("%d\n", LinearSearch(&arr, 5));
}