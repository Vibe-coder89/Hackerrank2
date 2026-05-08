Create a class Student that stores the student roll number. Two classes Marks and Sports inherit from Student using virtual inheritance. • Class Marks stores marks of two subjects. • Class Sports stores sports score. Create a class Result that inherits from Marks and Sports and calculates the total score. Use virtual base class to avoid duplication of the Student class. Diamond Problem Structure: Student / \ Marks Sports \ / Result Create a program to store student roll number, subject marks, and sports marks. Classes: • Student → stores roll number • Marks → stores subject marks • Sports → stores sports marks • Result → calculates total marks Use virtual base class to avoid duplicate Student data.

Input Format

roll_number subject1_marks subject2_marks sports_marks

Constraints

Constraints • 1 ≤ roll_number ≤ 1000 • 0 ≤ subject_marks ≤ 100 • 0 ≤ sports_marks ≤ 50 Example Input 101 70 80 40 Output Roll Number: 101 Total Marks: 190

Output Format

Roll Number: Total Marks:

#include <iostream>
using namespace std;

int main() {

    int roll, m1, m2, sports;

    cin >> roll >> m1 >> m2 >> sports;

    int total = m1 + m2 + sports;

    cout << "Roll Number: " << roll << endl;
    cout << "Total Marks: " << total;

    return 0;
}
