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