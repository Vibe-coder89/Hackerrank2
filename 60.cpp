#include <iostream>
using namespace std;

int main() {

    int balance, amount;

    cin >> balance >> amount;

    try {

        
        if(amount <= 0) {
            throw "Invalid";
        }

        
        else if(amount > balance) {
            throw 1;
        }

        
        else if(balance < 0) {
            throw 10.5;
        }

        else {
            cout << "Please collect your cash";
        }
    }

    catch(int) {
        cout << "Insufficient balance";
    }

    catch(const char*) {
        cout << "Invalid withdrawal amount";
    }

    catch(...) {
        cout << "ATM system error! Please try again later.";
    }

    return 0;
}