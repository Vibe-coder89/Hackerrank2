#include <iostream>
using namespace std;

int main() {

    int accountType;
    double balance;

    cin >> accountType >> balance;

    
    if(accountType == 1) {
        cout << (balance * 2) / 100;
    }

    
    else if(accountType == 2) {
        cout << (balance * 5) / 100;
    }

    
    else if(accountType == 3) {
        cout << (balance * 1) / 100;
    }

    
    else {
        cout << "Invalid type";
    }

    return 0;
}