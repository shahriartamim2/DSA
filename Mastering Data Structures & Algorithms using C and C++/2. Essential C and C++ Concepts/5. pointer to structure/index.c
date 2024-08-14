#include<stdio.h>
#include<stdlib.h>

struct Rectangle {
    int length;
    int width;
};
int main(){
    struct Rectangle r;
    struct Rectangle *p = &r;
    r.length = 10;
    r.width = 15;

    (*p).length = 20;
    (*p).width = 5;

    p->length = 30;
    p->width = 18;


    printf("%d,%d",r);


    return 0;
}