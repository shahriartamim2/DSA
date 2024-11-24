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

    void getInfo(){
        cout<<"Name:"<< name <<endl;
        cout<<"Age:"<< age <<endl;
        cout<<"Roll:"<< roll <<endl;
    }
}
;
int main(){
    Student s1;
    s1.name = "Noman";
    s1.age = 12;
    s1.roll = 1234;

    s1.getInfo();

}