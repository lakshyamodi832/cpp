#include <iostream>
using namespace std;

// A class with some member functions
class MyClass {
public:
    // Member variable
    int data;

    // Constructor
    MyClass(int value){
        data = value;
    }

    // Member function to display the value of 'data'
    void display() {
        cout << "Value of data: " << data << endl;
    }

    // Member function to add a number to 'data'
    void add(int num) {
        data += num;
        cout << "New value of data: " << data << endl;
    }
};

int main() {
    // Creating an object of MyClass
    MyClass obj(10);

    // Pointer to an object of MyClass
    MyClass* ptrObj = &obj;

    // Calling member functions using the pointer to object
    ptrObj->display(); // Calling display() function
    ptrObj->add(5);    // Calling add() function

    // Pointer to a member function of MyClass
    void (MyClass::*ptrFunc)();         // Pointer to member function that takes no parameters
    ptrFunc = &MyClass::display;        // Assigning address of display function to the pointer

    // Calling the member function using pointer to member function
    (ptrObj->*ptrFunc)();               // Using pointer to member function

    // Pointer to a member function that takes an int parameter
    void (MyClass::*ptrAdd)(int);
    ptrAdd = &MyClass::add;             // Assigning address of add function to the pointer

    // Calling the add function with a parameter using pointer to member function
    (ptrObj->*ptrAdd)(10);             // Using pointer to member function with parameter

    return 0;
}
