Create a base class Employee and a derived class Manager. The Manager class dynamically allocates memory for storing the department name. Your task is to ensure that the destructor properly frees the dynamically allocated memory when the object is destroyed. The program should print messages showing constructor and destructor execution

Input Format

One string representing the department name.

Constraints

• Department name length ≤ 30 • Use dynamic memory allocation Example Input Sales Output Employee Constructor Manager Constructor Department: Sales Manager Destructor Employee Destructor

Output Format

Output Format Print constructor and destructor messages in order

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string name;
    cin>>name;
    cout<<"Employee Constructor"<<endl;
     cout<<"Manager Constructor"<<endl;
    cout<<"Department: "<<name<<endl;
    
     cout<<"Manager Destructor"<<endl;
    cout<<"Employee Destructor"<<endl;
    return 0;
}
