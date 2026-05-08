#include <iostream>
using namespace std;

class Base {

public:

    Base() {
        cout << "Base Constructor" << endl;
    }

    ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived1 : public Base {

public:

    Derived1() {
        cout << "Derived1 Constructor" << endl;
    }

    ~Derived1() {
        cout << "Derived1 Destructor" << endl;
    }
};

class Derived2 : public Derived1 {

public:

    Derived2() {
        cout << "Derived2 Constructor" << endl;
    }

    ~Derived2() {
        cout << "Derived2 Destructor" << endl;
    }
};

int main() {

    int n;
    cin >> n;

    // Normal object
    if(n == 1) {

        Derived2 obj;
    }

    // Object inside block
    else if(n == 2) {

        {
            Derived2 obj;
        }
    }

    // Dynamic memory
    else if(n == 3) {

        Derived2 *obj = new Derived2();

        delete obj;
    }

    // Multiple objects
    else if(n == 4) {

        Derived2 obj1, obj2;
    }

    // Nested scope
    else if(n == 5) {

        Derived2 obj1;

        {
            Derived2 obj2;
        }
    }

    return 0;
}