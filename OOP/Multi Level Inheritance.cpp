#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
};
class Student : public Person{
public: 
    int roll;
};
class gradStudent : public Student{
public:
    int salary;
}
;
int main(){
    gradStudent gs1;
    gs1.name = "noman";
    gs1.age = 12;
    gs1.roll = 1221;
    gs1.salary = 10000000;
    cout<<"Name="<<gs1.name<<endl;
    cout<<"Age="<<gs1.age<<endl;
    cout<<"Roll="<<gs1.roll<<endl;
    cout<<"Salary="<<gs1.salary<<endl;
    return 0;
}