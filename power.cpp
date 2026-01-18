#include<iostream>
#include<cmath>
using namespace std;

double power(double m, int n){
    return pow(m, n);
}

int main(){
    double m;
    int n;
    char c;
    double p;

    cout<<"Enter the value of base: ";
    cin>>m;

    cout<<"Do you want to enter the value of exponent?(Y/N): ";
    cin>>c;

    if(c=='Y'){
        cout<<"Enter the value of exponent: ";
        cin>>n;
    } else if(c=='N'){
        n = 2;
    }

    p = power(m,n);

    cout<<m<<" raised to "<<n<<": "<<p<<endl;

    return 0;
}