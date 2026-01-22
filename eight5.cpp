#include<iostream>
#include<cstring>
using namespace std;

class String{
    char s[100];
    public:
    String(){

    }
    String(char a[]){
        strcpy(s, a);
    }
    void show(){
        cout<<s<<endl;
    }
    String operator +(String& b){
        String temp;
        strcpy(temp.s, s);
        strcat(temp.s, b.s);
        return temp;
    }
};

int main(){
 
    String s1("Lakshya");
    String s2(" Modi");

    String s3 = s1 + s2;

    s3.show();

    return 0;
}