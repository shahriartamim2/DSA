#include<iostream>
using namespace std;

int main(){
    int *a1 = new int[5];
    int i;

    for(i=0; i<4; i++){
        a1[i] = i+1;
    };
            for(i=0; i<4; i++){
        std::cout<<a1[i]<<std::endl;
    };
    int *a2 = new int[9];
        for(i=0; i<4; i++){
        a2[i] = a1[i];
    };

    delete[] a1;
    a1 = a2;
    a2 = NULL;
    for(i=0; i<8; i++){
        a1[i] = i+1;
    };
    for(i=0; i<8; i++){
        std::cout<<a1[i]<<std::endl;
    };
    delete[] a1;
    return 0;
}