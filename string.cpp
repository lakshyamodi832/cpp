#include<iostream>
using namespace std;

class String{
    char* s;
    public:
    String(){

    }
    String(char* a){
        s = a;
    }
    String(String & s1){
        s = s1.s;
    }
    void show(){
        cout<<s<<endl;
    }
};

int main(){
    
    String s1("Lakshya");
    String s2(s1);

    s1.show();
    s2.show();

    return 0;
}