#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    string name;
    double salary;
    double scale;

    void setData(){
        cout<<"Enter employee id: ";
        cin>>id;
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter scale of salary: ";
        cin>>scale;
    }

    void getData(){
        cout<<"Employee id: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;    
    }

};

class Male : public Employee{
    public:
    int hrs;
    void hours(){
        cout<<"Enter the number of hours worked in a week: ";
        cin>>hrs;
    }
    double computePay(){
        salary = hrs*scale;
    }
};

class Female : public Employee{
    public:
    double computePay(){
         salary = 40*scale;
    }
};

int main(){
    Male m;

    m.setData();
    m.hours();
    m.computePay();
    m.getData();

    Female f;

    f.setData();
    f.computePay();
    f.getData();


    return 0;
}