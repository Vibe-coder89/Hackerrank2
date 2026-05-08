You are developing a banking system that calculates yearly maintenance charges for different types of accounts. Create a base class BankAccount with a function: double getCharges(double balance); Create the following derived classes: • SavingsAccount • CurrentAccount • FixedDepositAccount Each derived class must override the function without using virtual and apply its own rule. Charges Rule Account Type Charges Rule Savings 2% of balance Current 5% of balance Fixed Deposit 1% of balance

If the user selects Current Account and balance = 20000 Then charges = 5% of 20000 = 1000

Input Format

accountType balance Where: • accountType = 1 → Savings • accountType = 2 → Current • accountType = 3 → Fixed Deposit • anything else type should be “Invalid type” • balance → Account balance

Constraints

• 1 ≤ accountType ≤ 3 • 1000 ≤ balance ≤ 1,000,000

Output Format

Print the yearly maintenance charge / Invalid type

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
