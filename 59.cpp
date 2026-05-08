In real-world applications, not all exceptions can be predicted. To handle unexpected errors, C++ provides a default exception handler using catch(...). Write a program that: • Throws different types of exceptions based on user input • Handles known exceptions explicitly • Uses catch(...) to handle all other unknown exceptions Description Inside a try block: • If choice == 1 → throw an integer exception • If choice == 2 → throw a double exception • If choice == 3 → throw a character exception • Otherwise → throw an unknown exception Exception Handling Rules: • Use specific catch blocks for known types (int, double, char) • Use catch(...) as a default handler for any other type

Input Format

• A single integer choice

Constraints

• 1 ≤ choice ≤ 100

Output Format

Output Format • If integer exception: Integer Exception Caught • If double exception: Double Exception Caught • If character exception: Character Exception Caught • For any other exception: Unknown Exception Caught

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
