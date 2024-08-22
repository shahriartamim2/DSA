#include<iostream>
using  namespace std;

void Rec(int x){
    if(x>0){
        std::cout<<"Ascending output"<<x<<std::endl;
        Rec(x-1);
        std::cout<<"Descending output"<<x<<std::endl;
    }
}

int main(){
    int x=5;
    Rec(x);
    return 0;
}