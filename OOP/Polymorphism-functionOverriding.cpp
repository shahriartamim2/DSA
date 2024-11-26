#include<iostream>
#include<string>
using namespace std;

// Function Overloading
class Parent{
public:
    void getInfo(){
        cout<<"Parent Class\n";
    }
    virtual void hello(){
        cout<<"This is from Parent"<<endl;//virtual function 
    }
};
class Child : public Parent{
public:
    void getInfo(){
        cout<<"Child Class"<<endl;// PArent function overridden 
    }
        void hello(){
        cout<<"This is from Child class"<<endl;//
    }
};

int main(){
    Parent p1;
    p1.getInfo();
    Child c1;
    c1.getInfo();
    c1.hello();
    return 0;
}