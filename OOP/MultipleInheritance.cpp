#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int age;
};
class Teacher{
public: 
    string subject;
    int salary;

};
class TA : public Student, public Teacher{
    
}
;
int main(){
    TA t1;
    t1.name = "noman";
    t1.age = 12;
    t1.subject = "CS";
    t1.salary = 10000000;
    cout<<"Name="<<t1.name<<endl;
    cout<<"Age="<<t1.age<<endl;
    cout<<"Subject="<<t1.subject<<endl;
    cout<<"Salary="<<t1.salary<<endl;
    return 0;
}