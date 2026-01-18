#include<iostream>
using namespace std;

int a = 1;

int main(){
    
    int a = 2;

    cout<<"Local: "<<a<<endl;
    cout<<"Global: "<<::a<<endl;

    return 0;
}