#include<iostream>
using namespace std;

class Calender{
    int day, month, year;
    public:
    Calender(){

    }
    Calender(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }
    void addDays(){
        cout<<"Enter date: "<<endl;
        cout<<"Enter day: "<<endl;
        cin>>day;
        cout<<"Enter month: "<<endl;
        cin>>month;
        cout<<"Enter year: "<<endl;
        cin>>year;
    }
    void showDays(){
        cout<<"Date: "<<endl;
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};

int main(){
    
    Calender c1(1, 2, 2026), c2;

    c2.addDays();

    c1.showDays();
    c2.showDays();

    return 0;
}