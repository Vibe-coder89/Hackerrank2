#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

   
    if(b == 0) {
        cout << "Exception: Division by zero";
    }

    else {

        cout << "Risky Result: " << a / b << endl;
        cout << "Safe Result: " << a / b;
    }

    return 0;
}