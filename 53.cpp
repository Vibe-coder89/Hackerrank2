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