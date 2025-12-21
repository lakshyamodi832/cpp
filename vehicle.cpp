#include<iostream>
using namespace std;

class vehicle{
    public:
    string veh_num;
    string chas_num;

    vehicle(){

    }

    vehicle(string veh, string chas){
        veh_num = veh;
        chas_num = chas;
    }

     virtual void display(){
        cout<<"Vehicle number: "<<veh_num<<endl<<"Chassis number: "<<chas_num<<endl;
    }
};

class scooter : public vehicle{
    public:
    int wheel;
    string comp;

    scooter(){

    }

    scooter(string vehc, string chass, int w, string c){
        veh_num = vehc;
        chas_num = chass;
        wheel = w;
        comp = c;
    }

    void display(){
        cout<<"Vehicle number: "<<veh_num<<endl<<"Chassis number: "<<chas_num<<endl<<"Wheel: "<<wheel<<endl<<"Company: "<<comp<<endl;
    }
};

class car : public vehicle{
    public:
    double price;
    string comp;

    car(){

    }

    car(string v, string ch, double p, string c){
        veh_num = v;
        chas_num = ch;
        price = p;
        comp = c;
    }

    void display(){
        cout<<"Vehicle number: "<<veh_num<<endl<<"Chassis number: "<<chas_num<<endl<<"Price: "<<price<<endl<<"Company: "<<comp<<endl;        
    }
};

int main(){
    scooter s("S123", "456765", 2, "tvs");

    car c("C456", "765456", 696969, "tata");

    s.display();

    c.display();

    return 0;
}