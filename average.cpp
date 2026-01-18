#include<iostream>
using namespace std;

class B;
class C;

class A{
    int a;
    public:
    void setA(){
        cout<<"Enter First Number: ";
        cin>>a;
    }

    friend void avg(A, B, C);
};

class B{
    int b;
    public:
    void setB(){
        cout<<"Enter Second Number: ";
        cin>>b;
    }

    friend void avg(A, B, C);
};

class C{
    int c;
    public:
    void setC(){
        cout<<"Enter Third Number: ";
        cin>>c;
    }

    friend void avg(A, B, C);
};

void avg(A one, B two, C three){
    cout<<"Average: "<<(one.a+two.b+three.c)/3<<endl;
}

int main(){
 
    A a;
    B b;
    C c;

    a.setA();
    b.setB();
    c.setC();

    avg(a, b, c);

    return 0;
}