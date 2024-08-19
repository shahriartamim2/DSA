// 
#include<iostream>
using namespace std;

template <class T>
class Arithamatic{
    private:
        T a;
        T b;

    public:
    Arithamatic<T>(T a, T b);
    T sub();
    T add();
};

template <class T>
Arithamatic<T>::Arithamatic(T a, T b){
    this->a= a;
    this->b= b;
};

template <class T>
T Arithamatic<T>::add(){
    T c;
    c = a+b;
    return c;
}

template <class T>
T Arithamatic<T>::sub(){
    T c;
    c = a-b;
    return c;
}
int main(){
    Arithamatic<double> a(10.6575,5.9);
        cout<<"Addition is: ";
    cout<< a.add();
        cout<<"\tSubtraction is: ";
    cout<<a.sub();

    // int 
    // Arithamatic<int> a(10,5);
    //     cout<<"Addition is: ";
    // cout<< a.add();
    //     cout<<"\tSubtraction is: ";
    // cout<<a.sub();
    
    return 0 ;
}