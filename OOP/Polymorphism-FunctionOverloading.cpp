#include<iostream>
#include<string>
using namespace std;

// Function Overloading
class Student{
public:
    string name;
    int age;

    void getInfo(int age){
        cout<<"Age:"<<age<<endl;
    }
    void getInfo(string name){
        this->name = name; 
        cout<<"Name:"<<name<<endl;
    }
};


;
int main(){
    // Student s1;
    Student s1;
    // s1.getInfo(43);
    s1.getInfo("Tasnim");
    return 0;
}