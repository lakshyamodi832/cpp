#include<iostream>
using namespace std;

class A{
    public:
    int a = 50;
};

int main(){
 
    A one;
    A *ptr;
    ptr = &one;

    cout<<ptr->a;

    return 0;
}