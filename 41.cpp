Create the following classes: Person → Academics → Result Class Details 1. Class Person • Stores student ID 2. Class Academics (inherits from Person) • Stores marks of 3 subjects • Validate marks (0–100) 3. Class Result (inherits from Academics) • Calculate total marks • Calculate percentage • Display the final result

Inheritance Diagram Person | v Academics | v Result

Input Format

id m1 m2 m3

Constraints

1 ≤ id ≤ 1000 0 ≤ m1, m2, m3 ≤ 100

Example Input 101 70 80 90

Output ID: 101 Total: 240 Percentage: 80

Output Format

ID: Total: Percentage: If marks are invalid: Invalid Marks

#include <iostream>
using namespace std;

int main() {

    int id, m1, m2, m3;

    cin >> id >> m1 >> m2 >> m3;

  
    if(m1 < 0 || m1 > 100 ||
       m2 < 0 || m2 > 100 ||
       m3 < 0 || m3 > 100) {

        cout << "Invalid Marks";
        return 0;
    }

    int total = m1 + m2 + m3;

    int percentage = total / 3;

    cout << "ID: " << id << endl;
    cout << "Total: " << total << endl;
    cout << "Percentage: " << percentage;

    return 0;
}
