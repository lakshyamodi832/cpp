#include<iostream>
using namespace std;

class Coord{
    double x, y;
    public:
    Coord(){

    }
    Coord(double x, double y){
        this->x = x;
        this->y = y;        
    }
    void show(){
        cout<<x<<", "<<y<<endl;
    }
    Coord operator ++(){
        x = ++x;
        y = ++y;
    }
    Coord operator --(){
        x = --x;
        y = --y;
    }
    Coord operator ++(int){
        Coord temp;
        x = ++x;
        y = ++y;
        return temp;
    }
    Coord operator --(int){
        Coord temp;
        x = --x;
        y = --y;
        return temp;
    }
};

int main(){
 
    Coord c1(2, 3.4);
    Coord c2(6.9, 5.6);

    c1.show();

    ++c1;

    c1.show();

    c2.show();

    --c2;

    c2.show();

    c1.show();

    c1++;

    c1.show();

    c2.show();

    c2--;

    c2.show();

    return 0;
}