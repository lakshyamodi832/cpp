#include<iostream>
using namespace std;

class Fahrenheit;

class Celsius{
    double cel;
    public:
    Celsius(){

    }
    Celsius(double c){
        cel = c; 
    }
    void read(){
        cout<<"Enter the temperatur in Celsius: ";
        cin>>cel;
    }
    void disp(){
        cout<<cel<<"°C"<<endl;
    }
    double getCel(){
        return cel;
    }
    Celsius(Fahrenheit f);
};

class Fahrenheit{
    double fah;
    public:
    Fahrenheit(){

    }
    Fahrenheit(double f){
        fah = f; 
    }
    void _read(){
        cout<<"Enter the temperatur in Fahrenheit: ";
        cin>>fah;
    }
    void _disp(){
        cout<<fah<<"°F"<<endl;
    }
    double getFah(){
        return fah;
    }
    Fahrenheit(Celsius c){
        fah = (c.getCel()*9/5)+32;
    }
};

Celsius::Celsius(Fahrenheit f){
    cel = (f.getFah()-32)/1.8;
}

int main(){
    
    Celsius c1;

    Fahrenheit f1;

    c1.read();

    Fahrenheit f2(c1);

    f2._disp();

    f1._read();

    Celsius c2(f1);

    c2.disp();

    return 0;
}