Design a class Number in C++ that overloads: 1. Unary Operator (-) o To negate the value of an object. o Must be implemented using a friend function. 2. Binary Operator (+) o To add two Number objects. o Must be implemented using a friend function. You are required to: • Read two integer values. • Create two objects of class Number. • Perform: o Unary minus on first object o Addition of two objects • Print results in the specified format.

Input Format

Two space-separated integers: a b

Constraints

• −106≤a,b≤106-10^6
• Must use friend function for both operators. • No global variables allowed.

Output Format

Print in the following format:

Negation of First Number: Sum:


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a,b;
    cin>>a>>b;
    cout<<"Negation of First Number: "<<a*-1<<endl;
    cout<<"Sum: "<<a+b;
    return 0;
}
