Problem Statement Design a Vehicle Fare System using Abstract Classes. Create an abstract base class Vehicle with a pure virtual function calculateFare(). Two derived classes Car and Bus calculate fare using different rates.

Description Abstract Class: Vehicle Data Member • distance Member Function virtual double calculateFare() = 0;

Derived Class: Car Formula Fare = distance × 15

Derived Class: Bus Formula Fare = distance × 8

Test Cases Test Case Input Output 1 1 Car 10 Fare = 150 2 1 Bus 20 Fare = 160 3 1 Car 15 Fare = 225 4 1 Bus 30 Fare = 240 5 2 Car 5 Bus 30 Fare = 75 Fare = 240

Input Format

N VehicleType distance Example Car 10 Bus 20

Constraints

Constraints • 1 ≤ N ≤ 100 • distance ≤ 1000

Output Format

Fare = value

#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        string type;
        int distance;

        cin >> type >> distance;

        int fare = 0;

       
        if(type == "Car") {
            fare = distance * 15;
        }

        
        else if(type == "Bus") {
            fare = distance * 8;
        }

        cout << "Fare = " << fare << endl;
    }

    return 0;
}
