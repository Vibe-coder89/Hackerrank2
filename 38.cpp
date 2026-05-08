#include <iostream>
using namespace std;

int main() {

    int type, rollNo, marks;
    string name;

    cin >> type >> name >> rollNo >> marks;

    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Marks: " << marks << endl;

   
    if(type == 1) {

        if(marks >= 75)
            cout << "Scholarship: Eligible";
        else
            cout << "Scholarship: Not Eligible";
    }

    
    else if(type == 2) {

        if(marks >= 80)
            cout << "Scholarship: Eligible";
        else
            cout << "Scholarship: Not Eligible";
    }

    return 0;
}