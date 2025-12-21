#include<iostream>
using namespace std;

class Base1{
    public:
    Base1(){
        cout<<"constructor1"<<endl;
    }

    ~Base1(){
        cout<<"destructor1"<<endl;
    }
};

class Base2{
    public:
    Base2(){
        cout<<"constructor2"<<endl;
    }

    ~Base2(){
        cout<<"destructor2"<<endl;
    }
};

class Derived : public Base1, public Base2{
    public:
    
    Derived(){
        cout<<"D_const"<<endl;
    }

    ~Derived(){
        cout<<"D-dest"<<endl;
    }
};

int main(){
    Derived d;

    return 0;
}