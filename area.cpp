#include<iostream>
using namespace std;

float calcArea(int l){
    return l*l;
}

double calcArea(float l, double m){
    return l*m;
}

double calcArea(double r){
    return 3.14*r;
}

int main(){
    cout<<"Area of square of length 5 cm: "<<calcArea(5)<<" cm"<<endl;
    cout<<"Area of rectangle of length 5 cm and breadth 3 cm: "<<calcArea(5, 3)<<" cm"<<endl;
    cout<<"Area of circle of radius 5 cm: "<<calcArea(5.0)<<" cm"<<endl;
}