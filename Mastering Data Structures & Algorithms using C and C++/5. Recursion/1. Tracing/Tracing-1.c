#include<stdio.h>

void Recursion(int n){
    if(n>0){
        printf("%d\t", n);
        Recursion(n-1);
    };
};

void main(){
    int x  = 5;
    Recursion(x);
};