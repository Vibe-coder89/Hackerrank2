Write a C++ program to demonstrate Hybrid Inheritance. Create the following classes: Base Class Vehicle • vehicleId • mileage

Derived Class 1 Car (inherits from Vehicle) • Display vehicle details Another Base Class Fare • farePerKm Derived Class 2 Bus (inherits from Vehicle and Fare) • Calculate total fare = mileage × farePerKm • Display vehicle details and total fare

Class Structure Vehicle / \ Car Bus \ Fare

Input Format

First line: Integer N (number of vehicles) Next N lines: VehicleType VehicleID Mileage FarePerKm Where: • VehicleType = C (Car) or B (Bus) • VehicleID = integer • Mileage = integer • FarePerKm = integer (only used for Bus, for Car it can be 0)

Constraints

Constraints • 1 ≤ N ≤ 50 • 100 ≤ VehicleID ≤ 9999 • -10 ≤ Mileage ≤ 200 • 1 ≤ FarePerKm ≤ 50 • VehicleType must be either C or B

Output Format

For Car: Vehicle ID: Mileage: Type: Car For Bus: Vehicle ID: Mileage: Fare Per Km: Total Fare: Type: Bus If mileage ≤ 0 → print Invalid Mileage



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
