#include <stdio.h>

struct Array
{
    int A[10];
    int length;
};

int BinarySearch(struct Array arr, int key)
{
    int l, h, mid;
    l = 0;
    h = arr.length;
    while(l<=h){
        mid = (l+h)/2;
        if(key == arr.A[mid]){
            return mid;
        }else if(key<arr.A[mid]){
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    return -1;
};

int main()
{
    struct Array arr = {{2,3,4,5,6,8,9,11,15,18},9};

    printf("\nIndex of the element is : %d\n", BinarySearch(arr, 8));
}