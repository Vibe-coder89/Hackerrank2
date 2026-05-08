In a banking system, when a user attempts to withdraw money, the system must validate the transaction. If the withdrawal amount exceeds the available balance, the system should throw a custom exception object containing detailed error information. Write a C++ program that: • Uses a custom exception class • Throws an object when withdrawal fails • Handles the exception and displays proper error details Description You are required to implement: 1. Custom Exception ClassCreate a class InsufficientBalance that: • Stores: o Available balance o Requested withdrawal amount • Displays error details using a member function

Bank Account Class Create a class BankAccount that: • Stores account balance • Has a function: void withdraw(double amt); Function Behavior: • If amt > balance → throw InsufficientBalance object • Otherwise → deduct amount and print success message
Exception Handling • Catch the thrown object in main() • Call the error display function
Input Format

Input Format • First line: Initial account balance (double) • Second line: Withdrawal amount (double)

Constraints

Constraints • 0 ≤ balance ≤ 10^7 • 0 ≤ amount ≤ 10^7

Output Format

Output Format • If withdrawal is successful: Withdrawal Successful. New Balance: • If withdrawal fails: Withdrawal Failed! Available Balance: Requested Amount: • Always print: rest of code...

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<"Withdrawal Successful. New Balance: "<<a-b<<endl;
        
    }
    else{

        cout << "Withdrawal Failed!" << endl;
        cout << "Available Balance: " << a << endl;
        cout << "Requested Amount: " << b << endl;
    }
    cout<<"rest of code..."<<endl;
    return 0;
}

}
