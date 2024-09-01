#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    p = &a;
    printf("Value of a :%d\n",a);
    printf("Memory address of a :%d\n",&p);
    printf("Memory address of a :%d\n",p);
    printf("Value of pointers parent :%d",*p);
    return 0;
}