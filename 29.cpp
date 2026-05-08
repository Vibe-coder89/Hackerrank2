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