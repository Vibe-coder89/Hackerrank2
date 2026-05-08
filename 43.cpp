#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        char type;
        int id, mileage, fare;

        cin >> type >> id >> mileage >> fare;

        
        if(mileage <= 0) {
            cout << "Invalid Mileage";

            if(i != n - 1)
                cout << endl;

            continue;
        }

     
        if(type == 'C') {

            cout << "Vehicle ID: " << id << endl;
            cout << "Mileage: " << mileage << endl;
            cout << "Type: Car";
        }

        
        else if(type == 'B') {

            int totalFare = mileage * fare;

            cout << "Vehicle ID: " << id << endl;
            cout << "Mileage: " << mileage << endl;
            cout << "Fare Per Km: " << fare << endl;
            cout << "Total Fare: " << totalFare << endl;
            cout << "Type: Bus";
        }

        
        if(i != n - 1)
            cout << endl << endl;
    }

    return 0;
}