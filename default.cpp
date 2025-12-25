#include <iostream>
using namespace std;

// Function declaration with a default argument (value 0)
void displayInt(int num = 0) {
    cout << "The number is: " << num << endl;
}

int main() {
    displayInt(10); // Argument provided: outputs 10
    displayInt();   // No argument provided: uses default 0
    return 0;
}