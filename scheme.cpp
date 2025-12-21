#include<iostream>
using namespace std;

class scheme{
    public:
    string sch_id;
    string sch_name;
    double outgoing_rate;
    double message_charge;

    void setSch(){
        cout<<"Enter scheme id:";
        cin>>sch_id;
        cout<<"Enter scheme name: ";
        cin>>sch_name;
        cout<<"Enter outgoing rate: ";
        cin>>outgoing_rate;
        cout<<"Enter message charge: ";
        cin>>message_charge;
    }

    void getSch(){
        cout<<"Scheme id: "<<sch_id<<endl;
        cout<<"Scheme name: "<<sch_name<<endl; 
    }
};

class customer : public scheme{
    public:
    string cust_id;
    string cust_name;
    string mob_num;
    double duration;
    long messages;

    void setCust(){
        cout<<"Enter customer id: ";
        cin>>cust_id;
        cout<<"Enter customer name: ";
        cin>>cust_name;
        cout<<"Enter Mobile number: ";
        cin>>mob_num;
    }

    void getCust(){
        cout<<"Customer id: "<<cust_id<<endl;
        cout<<"Customer Name: "<<cust_name<<endl;
        cout<<"Mobile Number: "<<mob_num<<endl;
    }

    void setCall(){
        cout<<"Enter the total duration of call(minutes): ";
        cin>>duration;
    }

    void getCall(){
        cout<<"Total duration of call: "<<duration<<endl;
        cout<<"Outgoing Bill: "<<duration*outgoing_rate<<endl;
    }

    void setMess(){
        cout<<"Enter the total number of messages: ";
        cin>>messages;
    }

    void getMess(){
        cout<<"Total number of messages: "<<messages<<endl;
        cout<<"Message Bill: "<<messages*message_charge<<endl;
    }
};

int main(){
    customer c;
    int choice;

    c.setSch();
    c.setCust();

    cout<<"Choose from the following: "<<endl<<"1.Outgoing Bill"<<endl<<"2.Message Bill"<<endl;
    cin>>choice;

    switch (choice){
        case 1: c.setCall();
                c.getSch();
                c.getCust();
                c.getCall();
                break;
        case 2: c.setMess();
                c.getSch();
                c.getCust();
                c.getMess();
    }

    return 0;
}