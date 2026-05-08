In a company, HR needs to compare employee performance based on their performance score. Create a class Employee that stores: • Employee ID • Employee Name • Performance Score Overload relational operators so that two employees can be compared using: • > → Higher performance • < → Lower performance • == → Same performance • >= • <= The program should take details of two employees and display comparison results using overloaded relational operators.

Input Format

emp_id1 name1 score1 emp_id2 name2 score2

Constraints

• 1 ≤ emp_id ≤ 1000 • 0 ≤ performance score ≤ 100 • Employee name length ≤ 30 • Scores are integers

Output Format

Display comparison results in the following order:

Employee Comparison Result: emp1 > emp2 : TRUE/FALSE emp1 < emp2 : TRUE/FALSE emp1 == emp2 : TRUE/FALSE emp1 >= emp2 : TRUE/FALSE emp1 <= emp2 : TRUE/FALSE

    
#include <iostream>
using namespace std;

int main() {
    int id1, id2, score1, score2;
    string name1, name2;


    cin >> id1 >> name1 >> score1;
    cin >> id2 >> name2 >> score2;

    cout << "Employee Comparison Result:" << endl;

 
    if (score1 > score2)
        cout << "emp1 > emp2 : TRUE" << endl;
    else
        cout << "emp1 > emp2 : FALSE" << endl;

    
    if (score1 < score2)
        cout << "emp1 < emp2 : TRUE" << endl;
    else
        cout << "emp1 < emp2 : FALSE" << endl;

    
    if (score1 == score2)
        cout << "emp1 == emp2 : TRUE" << endl;
    else
        cout << "emp1 == emp2 : FALSE" << endl;

    
    if (score1 >= score2)
        cout << "emp1 >= emp2 : TRUE" << endl;
    else
        cout << "emp1 >= emp2 : FALSE" << endl;

    
    if (score1 <= score2)
        cout << "emp1 <= emp2 : TRUE" << endl;
    else
        cout << "emp1 <= emp2 : FALSE" << endl;

    return 0;
}
