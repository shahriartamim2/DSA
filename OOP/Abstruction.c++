#include<iostream>
#include<string>
using namespace std;

class Shape{ // abstruct class 
public:
    virtual void draw() = 0; // abstraction virtual function
};
class Circle : public Shape{
public:
    void draw(){
        cout<<"This is abstruction";
    }
};
int main(){
    Circle c1;
    c1.draw();
    return 0;
}