#include<iostream>
using  namespace std;

void Rec(int x){
    if(x>0){
        std::cout<<""<<x<<std::endl;      
        Rec(x-1);
        Rec(x-1);
    }
}

int main(){
    int x=3;
    Rec(x);
    return 0;
}

// space complexity is O(n), cause n times x created on stack 