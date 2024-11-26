#include<iostream>
#include<string>
using namespace std;

// Function Overloading
class Parent{
public:
    void getInfo(){
        cout<<"Parent Class\n";
    }
};
class Child : public Parent{
public:
    void getInfo(){
        cout<<"Child Class";// PArent function overridden 
    }
};

int main(){
    Parent p1;
    p1.getInfo();
    Child c1;
    c1.getInfo();
    return 0;
}