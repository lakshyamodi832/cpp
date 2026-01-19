#include<iostream>
using namespace std;

class book;
class tape;
class publisher{
    string title;
    public:
    publisher(){

    }
    publisher(string s){
        title = s;
    }
    void setTitle(){
        cout<<"Enter title: ";
        cin>>title;
    }
    void getTitle(){
        cout<<"Title: "<<title<<endl;
    }
};

class book : public publisher{
    long pg;
    public:
    book(){

    }
    book(long p){
        pg = p;
    }
    void setPg(){
        cout<<"Enter the page no: ";
        cin>>pg;
    }
    void getPg(){
        cout<<"Page no: "<<pg<<endl;
    }
};

class tape : public publisher{
    int duration;
    public:
    tape(){

    }
    tape(int d){
        duration = d;
    }
    void setDuration(){
        cout<<"Enter duration(min): ";
        cin>>duration;
    }
    void getDuration(){
        cout<<"Duration(min): "<<duration<<endl;
    }
};

int main(){
    
    book b;
    tape t;

    b.setTitle();
    b.setPg();
    b.getTitle();
    b.getPg();

    t.setTitle();
    t.setDuration();
    t.getTitle();
    t.getDuration();

    return 0;
}