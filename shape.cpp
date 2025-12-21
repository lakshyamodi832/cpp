#include<iostream>
using namespace std;

class shape{
    public:
    double one;
    double two;

    void get_data(double o, double t){
        one = o;
        two = t;
    }

    virtual void display_area(){
        cout<<"Area: "<<one*two<<endl;
    }
};

class triangle : public shape{
    public:

    void display_area(){
        cout<<"Area of a triangle: "<<0.5*one*two<<endl;
    }
};

class rectangle : public shape{
    public:

    void display_area(){
        cout<<"Area of a rectangle: "<<one*two<<endl;
    }
};

int main(){
    triangle t;

    t.get_data(3,4);
    t.display_area();

    rectangle r;

    r.get_data(3,4);
    r.display_area();

    return 0;
}