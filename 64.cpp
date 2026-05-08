#include <iostream>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

   
    if(a < 0 || b < 0) {
        cout << "Invalid input";
    }

    
    else if(a > 100 || b > 100) {
        cout << "Out of range";
    }

    else if(b == 0) {
        cout << "Division by zero";
    }

    
    else {
        cout << "Result: " << a / b;
    }

    return 0;
}