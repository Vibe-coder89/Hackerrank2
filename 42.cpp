You are required to implement a program that demonstrates Hierarchical Inheritance in C++. Create a base class named Vehicle that stores common details such as: • vehicle id • mileage (km per litre) Create two derived classes: • Car • Bus Both classes must inherit from the base class Vehicle and perform validation before displaying details.

Description The program should: 1. Read the number of vehicles N 2. For each vehicle: o Read type (Car or Bus) o Read vehicle id o Read mileage 3. Validate the mileage: o If mileage ≤ 0 → print Invalid Mileage o Otherwise display details

Class Structure Vehicle | |------ Car | |------ Bus

Input Format

First line: Integer N (number of vehicles)

Next N lines: VehicleType VehicleID Mileage Where: • VehicleType → C (Car) or B (Bus) • VehicleID → integer • Mileage → integer

Constraints

Constraints • 1 ≤ N ≤ 50 • 100 ≤ VehicleID ≤ 9999 • -10 ≤ Mileage ≤ 100 • Vehicle type must be either C or B

Example Input 3 C 101 18 B 202 12 C 303 -5

Output Vehicle ID: 101 Mileage: 18 Type: Car

Vehicle ID: 202 Mileage: 12 Type: Bus

Invalid Mileage

Output Format

For valid input: Vehicle ID: Mileage: Type: Car/Bus For invalid mileage: Invalid Mileage

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
