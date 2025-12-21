#include<iostream>
using namespace std;

class shape{
    public:
    double x;

    virtual double area(){
        
    }
};

class square : public shape{
    public:

    double area(){
        return x*x;
    }
};

class circle : public shape{
    public:

    double area(){
        return 3.14*x*x;
    }
};

int main(){
    square s;

    cout<<"Enter the length: ";
    cin>>s.x;

    cout<<"Area of the square: "<<s.area()<<endl;

    circle c;

    cout<<"Enter the radius: ";
    cin>>c.x;

    cout<<"Area of circle: "<<c.area()<<endl;

    return 0;
}

