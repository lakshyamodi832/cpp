#include<iostream>
using namespace std;

class cur_acc;
class sav_acc;

class account{
    protected:
    string name, type;
    long num;
    double balance;
    public:
    account(){

    }
    account(string n, double b, string t, long nu){
        name = n;
        balance = b;
        type = t;
        num = nu;
    }
    void deposit(double d){
        if(d > 0){
            balance += d;
            cout<<"Balance: "<<balance<<endl;
        } else{
            cout<<"Invalid amount!"<<endl;
        }
    }
    void withdraw(double w){
        if(w < balance){
            balance -= w;
            cout<<"Balance: "<<balance<<endl;
        } else{
            cout<<"Invalid amount!"<<endl;
        }
    }
};

class cur_acc : public account{
    public:
    cur_acc(){

    }
    cur_acc(string n, double b, long nu){
        name = n;
        balance = b;
        num = nu;
    }
    void compInt(){
        cout<<"No interest provided in Current account!"<<endl;
    }
};

class sav_acc : public account{
    double intRate = 0.03;
    public:
    sav_acc(){

    }
    sav_acc(string n, double b, long nu){
        name = n;
        balance = b;
        num = nu;
    }
    void compInt(){
        balance += balance * intRate;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
 
    sav_acc s("Lakshya", 69000, 69786789);
    s.deposit(69);
    s.withdraw(69);
    s.compInt();

    cur_acc c("Lakshya", 69000, 69786789);
    c.deposit(69);
    c.withdraw(69);
    c.compInt();

    return 0;
}