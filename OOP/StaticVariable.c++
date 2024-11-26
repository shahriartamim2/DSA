#include<iostream>
#include<string.h>
using namespace std;

void func(){
    static int x =0;
    cout<<"x = "<<x<<endl;
    x++;
}

int main(){
    func();
    func();
    func();
    return 0;

}