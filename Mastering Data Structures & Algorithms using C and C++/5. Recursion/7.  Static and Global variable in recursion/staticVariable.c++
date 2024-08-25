#include<iostream>
using namespace std;

int Rec(int x){
    static int n = 0 ;
    if(x>0){
        n++;
        return Rec(x-1) + n;
    }
    return 0;
}

int main(){
    int x = 5;
    std::cout<<Rec(x)<<std::endl; 
    return 0;
}