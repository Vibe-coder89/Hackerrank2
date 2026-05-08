#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    
    if(n < 1 || n > 100) {
        cout << "Invalid number of patients";
        return 0;
    }

    int id, age, days;

    for(int i = 0; i < n; i++) {

        cin >> id >> age >> days;

        
        if(id < 1 || id > 10000 || age < 0 || age > 120 || days < 1 || days > 365) {
            cout << "Invalid input for patient " << i + 1;
            return 0;
        }

       
        int cost = age * days;

        cout << cost << endl;
    }

    return 0;
}