#include<iostream>
using namespace std;

class B;
class A{
    int a;
    public:
    void setA(){
        cout<<"Enter the value of a: ";
        cin>>a;
    }

    void getA(){
        cout<<"a: "<<a<<endl;
    }
    friend void swap(A &one, B &two);
};

class B{
    int b;
    public:
    void setB(){
        cout<<"Enter the value of b: ";
        cin>>b;
    }

    void getB(){
        cout<<"b: "<<b<<endl;
    }
    friend void swap(A &one, B &two);
};

void swap(A &one, B &two){
    int temp = one.a;
    one.a = two.b;
    two.b = temp;
}

int main(){
    A one;
    B two;

    one.setA();
    one.getA();

    two.setB();
    two.getB();

    swap(one, two);

    cout<<"After swapping: "<<endl;
    one.getA();
    two.getB();

    return 0;
}