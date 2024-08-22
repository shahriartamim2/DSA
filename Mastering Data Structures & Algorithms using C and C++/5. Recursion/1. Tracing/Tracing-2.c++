#include<iostream>
using namespace std;

void Recursion(int n){
    if(n>0){
        Recursion(n-1);
        std::cout<<"pattern:"<<n<<std::endl;
    }
};

int main(){
    int x  = 5;
    Recursion(x);
    return 0;
};