#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        string type;
        double balance;

        cin >> type >> balance;

        double interest = 0;

        
        if(type == "Savings") {
            interest = balance * 0.04;
        }

       
        else if(type == "Current") {
            interest = balance * 0.02;
        }

        cout << "Interest = " << (int)interest << endl;
    }

    return 0;
}