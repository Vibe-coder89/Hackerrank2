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