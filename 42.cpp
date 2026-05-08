#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        char type;
        int id, mileage;

        cin >> type >> id >> mileage;

       
        if(mileage <= 0) {
            cout << "Invalid Mileage" << endl;
            continue;
        }

        cout << "Vehicle ID: " << id << endl;
        cout << "Mileage: " << mileage << endl;

        if(type == 'C') {
            cout << "Type: Car";
        }
        else if(type == 'B') {
            cout << "Type: Bus";
        }

        if(i != n - 1) {
            cout << endl;
        }

        if(i != n - 1) {
            cout << endl;
        }
    }

    return 0;
}