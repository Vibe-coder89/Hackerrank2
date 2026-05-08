#include <iostream>
using namespace std;

int main() {

    double balance, amount;

    cin >> balance >> amount;

    try {

        
        if(amount > balance) {
            throw amount;
        }

        balance = balance - amount;

        cout << "Withdrawal Successful. New Balance: "
             << balance << endl;
    }

    catch(double amt) {

        cout << "Withdrawal Failed!" << endl;
        cout << "Available Balance: " << balance << endl;
        cout << "Requested Amount: " << amt << endl;
    }

    cout << "rest of code...";

    return 0;
}