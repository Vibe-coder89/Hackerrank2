You are given an integer N. Create N objects of the Derived class.

Each time an object is created: • First the Base constructor must execute. • Then the Derived constructor must execute. When the program finishes, destructors will be called automatically in reverse order: • First the Derived destructor • Then the Base destructor Print the order of constructor and destructor calls

Input Format

A single integer N

Constraints

• 1 ≤ N ≤ 5 • Use inheritance only • Output must match exactly

Input = n (number of objects) We must check: • n must be a number • n must be between 1 and 5 • If invalid → print "Invalid Input"

Output Format

For every object created: • Print constructor messages • After all objects are created, destructors should be printed automatically in reverse order.

#include <iostream>
using namespace std;

class Base {

public:

    Base() {
        cout << "Base Ctor" << endl;
    }

    ~Base() {
        cout << "Base Dtor" << endl;
    }
};

class Derived : public Base {

public:

    Derived() {
        cout << "Derived Ctor" << endl;
    }

    ~Derived() {
        cout << "Derived Dtor" << endl;
    }
};

int main() {

    int n;

    if(!(cin >> n)) {
        cout << "Invalid Input";
        return 0;
    }

    if(n < 1 || n > 5) {
        cout << "Invalid Input";
        return 0;
    }

    Derived obj[n];

    return 0;
}
