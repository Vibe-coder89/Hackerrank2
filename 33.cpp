You are given information about students in a college. Each student record contains: • Student ID • Marks in 3 subjects

You need to convert a Student object into a Result object using an appropriate constructor (Object → Object conversion). The Result class should store: • Student ID • Total Marks • Percentage

Your task is to: 1. Read the student data. 2. Convert each Student object into a Result object using a constructor. 3. Display the result in the required format.

Class Student • int id int m1, m2, m3 Class Result • int id int total • float percentage Use Object -> Object conversion constructor inside the Result class.

n id m1 m2 m3 id m1 m2 m3 ... • n = number of students • Each of the next n lines contains: o Student ID o Marks in subject 1 o Marks in subject 2 o Marks in subject 3

Validation Applied Input Field Validation Rule Error output n 1 ≤ n ≤ 100 Invalid Number of Students id 1 ≤ id ≤ 9999 Invalid ID marks (m1, m2, m3) 0 ≤ marks ≤ 100 Invalid Marks

Input Format

2 101 70 80 90 102 60 75 85

Constraints

• 1 ≤ n ≤ 100 • 1 ≤ id ≤ 9999 • 0 ≤ marks ≤ 100 • Use object → object conversion using constructor • Do not calculate total inside main()

Output Format

ID: 101 Total: 240 Percentage: 80.00 ID: 102 Total: 220 Percentage: 73.33 Or Invalid Number of Students Invalid ID Invalid Marks

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cin >> n;

   
    if(n < 1 || n > 100) {
        cout << "Invalid Number of Students";
        return 0;
    }

    for(int i = 0; i < n; i++) {

        int id, m1, m2, m3;

        cin >> id >> m1 >> m2 >> m3;

        
        if(id < 1 || id > 9999) {
            cout << "Invalid ID";
            return 0;
        }

        
        if(m1 < 0 || m1 > 100 ||
           m2 < 0 || m2 > 100 ||
           m3 < 0 || m3 > 100) {

            cout << "Invalid Marks";
            return 0;
        }

        int total = m1 + m2 + m3;
        float percentage = total / 3.0;

        cout << "ID: " << id
             << " Total: " << total
             << " Percentage: "
             << fixed << setprecision(2)
             << percentage << endl;
    }

    return 0;
}
