#include<iostream>
using namespace std;

int &max(int x, int y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}

int main(){
 
    int a = 1, b = 2, c = 3, d = 4;

    int& ans = max(a, b);

    cout<<"Max: "<<ans<<endl;
    cout<<"b: "<<b<<endl;
    ans = max(c, d);
    cout<<"Max: "<<&ans<<endl;
    cout<<"Address of b: "<<&b<<endl;
    cout<<"value at b: "<<b<<endl;
    cout<<"ans: "<<ans<<endl; 

    return 0;
}