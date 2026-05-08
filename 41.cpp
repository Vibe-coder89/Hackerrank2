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