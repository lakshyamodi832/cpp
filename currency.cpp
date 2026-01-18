#include<iostream>
using namespace std;

class currency{
    int rs;
    int ps;
    public:
    currency(){
        
    }
    currency(int r, int p){
        rs = r;
        ps = p;
    
        if(ps > 99){
            rs += ps/100;
            ps %= 100;
        }
    }

    friend void add(currency, currency);
};

void add(currency one, currency two){
    currency total;
    total.rs = one.rs + two.rs;
    total.ps = one.ps + two.ps;
    
    if(total.ps > 99){
            total.rs += total.ps/100;
            total.ps %= 100;
    }

    cout<<"Total: "<<total.rs<<"."<<total.ps<<endl;
}

int main(){
    
    currency c1(12, 456), c2(34, 678);

    add(c1, c2);

    return 0;
}