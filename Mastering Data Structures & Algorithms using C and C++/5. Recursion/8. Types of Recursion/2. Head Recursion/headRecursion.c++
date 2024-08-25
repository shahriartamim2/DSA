#include<iostream>
using  namespace std;

void Rec(int x){
    if(x>0){
        Rec(x-1);
        std::cout<<"Head Recursion : "<<x<<std::endl;      
    }
}

int main(){
    int x=5;
    Rec(x);
    return 0;
}

// space complexity is O(n), cause n times x created on stack 