#include<iostream>
using namespace std;

class A{
    int a;
    public:
    A(int a){
        this->a = a;
    }

    void getA(){
        cout<<"a: "<<a<<endl;
    }
};

int main(){
    
    A one(3);

    one.getA();

    return 0;
}