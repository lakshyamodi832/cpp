#include<iostream>
using namespace std;

class Paise;

class Rupees{
    double rs;
    public:
    Rupees(){

    }
    Rupees(double r){
        rs = r;
    }
    void disp(){
        cout<<rs<<" rupees"<<endl;
    }
    double getRs(){
        return rs;
    }
    Rupees(Paise);
};

class Paise{
    int ps;
    public:
    Paise(){

    }
    Paise(int p){
        ps = p;
    }
    int getPs(){
        return ps;
    }
    void _disp(){
        cout<<ps<<" paise"<<endl;
    }
    Paise(Rupees r){
        ps = r.getRs()*100;
    }
};

Rupees::Rupees(Paise p){
    rs = p.getPs()/100;
}

int main(){
 
    Rupees r1(1.2);

    Paise p1(640);

    Rupees r2(p1);

    Paise p2(r1);

    r1.disp();

    r2.disp();

    p1._disp();

    p2._disp();

    return 0;
} 