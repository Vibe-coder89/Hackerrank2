Create the following classes: 1. Class Academics • Stores marks of 3 subjects • Validate marks (0–100) 2. Class Sports • Stores sports marks • Validate marks (0–50) 3. Class Result This class should inherit from both: Academics + Sports → Result The Result class must: • Calculate total marks • Calculate percentage • Display the final result

Input 101 70 80 90 40

Output ID: 101 Academic Total: 240 Sports Marks: 40 Grand Total: 280 Percentage: 80

Input Format

id m1 m2 m3 sportsMarks

Constraints

1 ≤ id ≤ 1000 0 ≤ m1, m2, m3 ≤ 100 0 ≤ sportsMarks ≤ 50

Output Format

ID: Academic Total: Sports Marks: Grand Total: Percentage: If marks are invalid: Invalid Marks

#include <iostream>
using namespace std;

int main() {

    int id, m1, m2, m3, sports;

    cin >> id >> m1 >> m2 >> m3 >> sports;

    
    if(m1 < 0 || m1 > 100 ||
       m2 < 0 || m2 > 100 ||
       m3 < 0 || m3 > 100 ||
       sports < 0 || sports > 50) {

        cout << "Invalid Marks";
        return 0;
    }

    int academicTotal = m1 + m2 + m3;
    int grandTotal = academicTotal + sports;

    int percentage = grandTotal * 100 / 350;

    cout << "ID: " << id << endl;
    cout << "Academic Total: " << academicTotal << endl;
    cout << "Sports Marks: " << sports << endl;
    cout << "Grand Total: " << grandTotal << endl;
    cout << "Percentage: " << percentage;

    return 0;
}
