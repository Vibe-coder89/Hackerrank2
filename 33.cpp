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