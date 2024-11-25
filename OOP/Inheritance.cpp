#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
    Person(string name,int age){
        this->name = name;
        this->age = age;
        cout<<"this is from teacher constructor"<<endl;
    }
};
class Student : public Person{
public: 
    int roll;

    Student(string name, int age, int roll) : Person(name, age){
        this->roll = roll;
        cout<<"this is from student constructor";
    }
    void getInfo(){
        cout<<"Name:"<< name <<endl;
        cout<<"Age:"<< age <<endl;
        cout<<"Roll:"<< roll <<endl;
    }
}
;
int main(){
    Student s1("Noman", 12, 343);
    s1.getInfo();
}