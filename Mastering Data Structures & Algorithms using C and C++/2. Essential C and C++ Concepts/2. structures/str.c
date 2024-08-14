#include<stdio.h>

struct student{
    int roll;
    int id;
    // char name[20];
};

int main(){
    struct student a;
    a.roll = 1001;
    a.id = 2020;
    // a.name = "NO";


    printf("%d ,%d",a);

    return 0;
}