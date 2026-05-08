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