#include <stdio.h>

struct Array
{
    int A[10];
    int length;
};

int BinarySearch(struct Array arr,int l, int h, int key)
{
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
        return BinarySearch(arr , l, mid-1, key );
        }
        else
        {
        return BinarySearch(arr, mid+1, h, key);
        }
    }
    return -1;
};

int main()
{
    struct Array arr = {{2, 3, 4, 5, 6, 8, 9, 11, 15, 18}, 9};
    printf("Hello");
    printf("\nIndex of the element is : %d\n", BinarySearch(arr, 0, arr.length, 6));
}