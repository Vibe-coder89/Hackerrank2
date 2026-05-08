You are required to design a program using Pure Virtual Functions in C++. Create an abstract base class named Employee that contains a pure virtual function to calculate the salary. Two derived classes FullTimeEmployee and PartTimeEmployee will override the pure virtual function and calculate the salary based on different rules.

Description 1. Create an abstract base class Employee with: o Data members:  employeeId  employeeName o A pure virtual function: virtual double calculateSalary() = 0; 2. Create a derived class FullTimeEmployee: o Salary = Basic Salary + Allowance 3. Create a derived class PartTimeEmployee: o Salary = Hours Worked × Rate Per Hour

In the main() function: o Read employee type (1 for FullTime, 2 for PartTime) o Accept required inputs o Call the function using base class pointer o Print the calculated salary
Input Format

Input consists of multiple lines: For Full Time Employee 1 employeeId employeeName basicSalary allowance For Part Time Employee 2 employeeId employeeName hoursWorked ratePerHour

Constraints

Constraints • 1 ≤ employeeId ≤ 9999 • 1000 ≤ basicSalary ≤ 100000 • 0 ≤ allowance ≤ 50000 • 1 ≤ hoursWorked ≤ 300 • 50 ≤ ratePerHour ≤ 1000 • Employee name contains no spaces Sample Input 1 101 Rahul 25000 5000 Sample Output Calculated Salary: 30000

Output Format

Display the calculated salary in the format: Calculated Salary: salary

#include <iostream>
using namespace std;

int main() {

    int type;
    cin >> type;

   
    if(type == 1) {

        int id;
        string name;
        double basicSalary, allowance;

        cin >> id >> name >> basicSalary >> allowance;

        double salary = basicSalary + allowance;

        cout << "Calculated Salary: " << salary;
    }

    
    else if(type == 2) {

        int id;
        string name;
        double hoursWorked, ratePerHour;

        cin >> id >> name >> hoursWorked >> ratePerHour;

        double salary = hoursWorked * ratePerHour;

        cout << "Calculated Salary: " << salary;
    }

    return 0;
}
