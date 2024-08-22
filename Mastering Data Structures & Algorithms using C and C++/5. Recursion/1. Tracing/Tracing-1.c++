#include<iostream>
using namespace std;

void Recursion(int n){
    if(n>0){
        std::cout<<"pattern:"<<n<<std::endl;
        Recursion(n-1);
    };
};

int main(){
    int x  = 5;
    Recursion(x);
    return 0;
};