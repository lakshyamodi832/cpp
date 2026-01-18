#include<iostream>
using namespace std;

class B;

class A{
    int a;
    public:
    void setA(){
        cout<<"Enter first number: ";
        cin>>a; 
    }

    friend void max(A one, B two);
};

class B{
    int b;
    public:
    void setB(){
        cout<<"Enter second number: ";
        cin>>b; 
    }

    friend void max(A one, B two);
};

void max(A one, B two){
    if(one.a > two.b){
        cout<<one.a<<" > "<<two.b<<endl;
    } else {
        cout<<one.a<<" < "<<two.b<<endl;
    }
}

int main(){
    
    A a;
    B b;

    a.setA();
    b.setB();

    max(a, b);

    return 0;
}