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