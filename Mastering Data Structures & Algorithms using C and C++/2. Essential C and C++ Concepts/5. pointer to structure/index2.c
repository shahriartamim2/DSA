#include<stdio.h>
#include<stdlib.h>

struct Rectangle {
    int length;
    int width;
};
int main(){

    struct Rectangle *p;

    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));

    p->length = 30;
    p->width = 18;

    printf("%d,%d",*p);


    return 0;
}