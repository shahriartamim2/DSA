#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
public:

Rectangle(int l, int b){
    length=l;
    breadth = b;
}
int area(){
    return length*breadth;
}
int changeLength(int l){
    length = l;
}
void swapValues(){
    int temp;
    temp = length;
    length = breadth;
    breadth = temp;
}
};

int main(){
    Rectangle r(10,5);
    int area;
    area = r.area();
    cout<<area;
    cout<<endl;
    r.changeLength(15);
    cout<<r.area() ;
    cout<<endl;
    r.swapValues();
    return 0;

}