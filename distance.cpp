#include<iostream>
using namespace std;

class Distance{
    double feet, inch;
    public:
    Distance(){

    }
    Distance(double f, double i){
        feet = f;
        inch = i;
        normalize();
    }
    void show(){
        cout<<feet<<"'"<<inch<<endl;
    }
    void normalize(){
        if(inch >= 12){
            feet += inch/12;
            inch = (int)inch % 12;        
        }
    }
    bool operator ==(Distance d){
        return (feet == d.feet && inch == d.inch);
    }
    bool operator >(Distance d){
        if(feet > d.feet){
            return true;
        } else if((feet == d.feet && inch > d.inch)){
            return true;
        } else {
            return false;
        }
    }
    bool operator <(Distance d){
        if(feet < d.feet){
            return true;
        } else if((feet == d.feet && inch < d.inch)){
            return true;
        } else {
            return false;
        }
    }
};

int main(){

    Distance d1(5, 7);
    Distance d2(5, 6);
 
    if(d1 == d2){
        cout<<"d1 is equal to d2"<<endl;
    } else{
        cout<<"d1 is not equal to d2"<<endl;
    }

    if(d1 > d2){
        cout<<"d1 is greater than d2"<<endl;
    } else{
        cout<<"d1 is not greater than d2"<<endl;
    }

    if(d1 > d2){
        cout<<"d1 is less than d2"<<endl;
    } else{
        cout<<"d1 is not less than d2"<<endl;
    }

    return 0;
}