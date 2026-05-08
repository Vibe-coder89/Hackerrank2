A university wants to determine whether a student is eligible for a scholarship based on their academic performance. Create a base class Student that stores the student's name and roll number. Two derived classes UGStudent and PGStudent store marks and calculate eligibility differently. A friend function will access the private data of these classes and display whether the student qualifies for a scholarship.

Description Base Class: Student Data Members • name • rollNo Member Functions • inputStudent() → Input student details

Derived Class: UGStudent (Undergraduate) Data Members • marks Scholarship Rule A UG student is eligible if: marks >= 75

Derived Class: PGStudent (Postgraduate) Data Members • marks Scholarship Rule A PG student is eligible if: marks >= 80

Friend Function checkScholarship() This function: • Accesses private members of both classes • Displays student details • Determines scholarship eligibility

Input Format

type name rollNo marks Where type = 1 → UG Student type = 2 → PG Student

Constraints

1 ≤ rollNo ≤ 1000 0 ≤ marks ≤ 100 1 ≤ type ≤ 2

Output Format

Name: Roll No: Marks: Scholarship: Eligible / Not Eligible

Sample Input 1 Rahul 101 78 Sample Output Name: Rahul Roll No: 101 Marks: 78 Scholarship: Eligible

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
