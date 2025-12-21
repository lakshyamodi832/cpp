#include<iostream>

using namespace std;
int & max(int & , int & );
int main() {
    int a = 5, b = 6, c = 5, d = 2;
    int & ans = max(a, b); //ans ir reference to b because (b>a)
    cout << "maximum is: " << & ans << endl;;
    cout << "b is: " << & b<<endl;
    ans = max(c, d); //ans modifies b with the maximum of c and i.e 5 here
    cout << "maximum is: " << & ans << endl;;
    cout << "Address b is: " << & b;
    cout << "value at b " << b << endl; // earlier b was 6 now it is modified to 5 by reference ans
    cout << "value of ans " << ans << endl;

    max(c, d) = 100;

    cout << "value at c " << c << endl;
    //cout<<"value of ans "<< ans<<endl;
    return 0;

}

int & max(int & x, int & y)
{
// your code goes here
    if (x > y)
        return x;
    else
        return y;
}
