#include<stdio.h>

struct Rectangle {
    int length;
    int breadth;
};

void initialize( struct Rectangle *P, int l, int b){
    P->length = l;
    P->breadth = b;
};
int area(struct Rectangle r){
    return r.length*r.breadth;
};

void changeLength(struct Rectangle *P, int l){
    P->length = l;
}

int main(){
    struct Rectangle r ;

    initialize(&r,20,14);
    printf("Length = %d\t,Breadth = %d\n",r);
    area(r);
    printf("Area = %d\n",area(r));
    changeLength(&r,15);
    printf("New Length = %d\t,Breadth = %d\n",r);
    return 0 ;
}