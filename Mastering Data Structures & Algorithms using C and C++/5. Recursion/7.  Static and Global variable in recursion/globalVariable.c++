#include<iostream>
using namespace std;
int n = 0; 

int Rec(int x){
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