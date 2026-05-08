You are developing an ATM system that processes withdrawal requests. The system must handle different types of errors using exception handling in C++. Write a program that: • Accepts account balance and withdrawal amount • Performs withdrawal using a function • Handles different types of exceptions: o Insufficient balance Invalid withdrawal amount (≤ 0) Unexpected system error Description: Implement a function: void withdrawMoney(int balance, int amount); The function should: 1. Throw an integer exception if withdrawal amount exceeds balance 2. Throw a string exception if withdrawal amount is less than or equal to 0 3. Simulate an unknown error using a different data type 4. Use multiple catch blocks including catch(...) for unknown errors

Input Format

• First line: Integer balance • Second line: Integer amount

Constraints

Constraints • 0 ≤ balance ≤ 10^6 • -10^5 ≤ amount ≤ 10^6

Output Format

Output Format Print one of the following messages: • "Please collect your cash" • "Insufficient balance" • "Invalid withdrawal amount" • "ATM system error! Please try again later."

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
