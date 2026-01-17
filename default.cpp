#include <iostream>
using namespace std;

void print_sum(int a, int b = 10, int c = 15){
    cout<<"Sum: "<<a + b + c<<endl;
}

int main() {

    print_sum(5);
    print_sum(5, 15);
    print_sum(5, 20, 25);

    return 0;
}