#include<stdio.h>


//value parameter 
// does not affect acutal values

int swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
};

int main(){
    int x, y;
    x = 10;
    y = 15;
    swap(x,y);
    printf("%d,%d",x,y);

    return 0 ;
};
