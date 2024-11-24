#include<iostream>
#include<string>
using namespace std;

class Teacher{
private: 
    double salary;
public:
    string name;
    string subject;
    string department;
    double* cgpaPtr;
    // Non-Parameterized Constructor
    // Parameterized Constructor
    Teacher(string name, string subject, string department, double cgpa){
        this->name = name;
        this->subject =subject;
        this->department = department ;
        this->salary= salary;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    } ; 
    Teacher(Teacher &obj){
        this->name = obj.name;
        this->subject = obj.subject;
        this->department = obj.department;
        *cgpaPtr = *obj.cgpaPtr;
        // this->cgpaPtr =obj.cgpaPtr;  // shallow copy 
    }

    ~Teacher(){
        cout<<"This is from destructor"<<endl;
        delete cgpaPtr;
    }
    
    void setSalary(double s){
        salary = s;
    }
    double getSalary(){
        return salary;
    }
    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"CGPA:"<<*cgpaPtr<<endl;
    }
};

int main(){
    Teacher t1("Tamim", "Math", "CS", 4.5);
    Teacher t2(t1);
    t1.getinfo();
    *(t2.cgpaPtr) = 5.0;
    t2.name = "NomaN";
    t1.getinfo();
    t2.getinfo();
    return 0;
}