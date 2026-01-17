#include<iostream>
using namespace std;

class student{
    int roll;
    string name;
    string subject[5];
    int marks[5];

    public:
    student(){
        subject[0] = "Science";
        subject[1] = "Maths";
        subject[2] = "English";
        subject[3] = "CPP";
        subject[4] = "DBMS";
    }

    void setMarks(){
        for(int i = 0; i < 5; i++){
            cout<<"Enter marks of "<<subject[i]<<": ";
            cin>>marks[i];
        }
    }

    void getMarks(){
        for(int i = 0; i < 5; i++){
            cout<<"Marks of "<<subject[i]<<": "<<marks[i]<<endl;
        }
    }

    void total(){
        int sum = 0;
        for(int i = 0; i < 5; i++){
            sum += marks[i];
        }

        cout<<"Total: "<<sum<<endl;
    }
};

int main(){
    
    student s1;
    student s2;

    s1.setMarks();
    s1.getMarks();
    s1.total();

    s2.setMarks();
    s2.getMarks();
    s2.total();

    return 0;
}