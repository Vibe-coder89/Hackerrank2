Create a Bank system using Abstract Classes where different account types calculate interest differently. Description Abstract Class: Account Member Function virtual double calculateInterest() = 0;

Derived Class: SavingsAccount Data Member • balance Formula Interest = balance × 0.04

Derived Class: CurrentAccount Data Member • balance Formula Interest = balance × 0.02

Input Format

N AccountType balance Example Savings 10000 Current 5000

Constraints

• 1 ≤ N ≤ 50 • balance ≤ 100000

Test Case Input Output 1 Savings 10000 Interest = 400 2 Current 5000 Interest = 100 3 Savings 20000 Interest = 800 4 Current 8000 Interest = 160 5 Savings 15000 Interest = 600

Output Format

Interest = value

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        string type;
        double balance;

        cin >> type >> balance;

        double interest = 0;

        
        if(type == "Savings") {
            interest = balance * 0.04;
        }

       
        else if(type == "Current") {
            interest = balance * 0.02;
        }

        cout << "Interest = " << (int)interest << endl;
    }

    return 0;
}
