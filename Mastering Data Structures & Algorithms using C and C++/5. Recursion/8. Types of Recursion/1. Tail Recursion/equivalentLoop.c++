#include<iostream>
using  namespace std;

int main(){
    int n = 5 ;
    while(n>0){
        std::cout<<"Ascending output"<<n<<std::endl;
        n--;
    }
    return 0;
}

// space complexity is O(1), cause only 1  time x created on stack 