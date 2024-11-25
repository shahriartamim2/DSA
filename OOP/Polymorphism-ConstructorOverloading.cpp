#include<iostream>
#include<string>
using namespace std;

// Constructor Overloading
class Student{
public:
    string name;
    int age;

    Student(){
        cout<<"This is non-parameterized constructor";
    }
    Student(string name){
        this->name = name; 
        cout<<"Name:"<<name<<endl;
    }
};


;
int main(){
    // Student s1;
    Student s1("Tasnim");

    return 0;
}