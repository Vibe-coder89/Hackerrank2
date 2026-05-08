#include <iostream>
using namespace std;

int main() {

    int choice;
    cin >> choice;

    try {

        if(choice == 1) {
            throw 10;
        }

        else if(choice == 2) {
            throw 10.5;
        }

        else if(choice == 3) {
            throw 'A';
        }

        else {
            throw "Unknown";
        }
    }

    catch(int) {
        cout << "Integer Exception Caught";
    }

    catch(double) {
        cout << "Double Exception Caught";
    }

    catch(char) {
        cout << "Character Exception Caught";
    }

    catch(...) {
        cout << "Unknown Exception Caught";
    }

    return 0;
}