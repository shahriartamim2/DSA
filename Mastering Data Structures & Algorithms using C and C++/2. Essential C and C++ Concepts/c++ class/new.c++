// 
#include<iostream>
using namespace std;

class Arithamatic{
    private:
        int a;
        int b;

    public:
    Arithamatic(int a, int b);
    int sub();
    int add();
};

Arithamatic::Arithamatic(int a, int b){
    this->a= a;
    this->b= b;
};

int Arithamatic::add(){
    int c;
    c = a+b;
    return c;
}
int Arithamatic::sub(){
    int c;
    c = a-b;
    return c;
}
int main(){
    Arithamatic a(10,5);
    cout<< a.add();
    cout<<a.sub();
    return 0 ;
}
