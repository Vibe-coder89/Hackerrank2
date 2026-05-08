#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
    string name;
    int age;

    getline(cin, name);
    cin >> age;

    if(age >= 18) {
        cout << "Eligible";
    }
    else {
        cout << "Not eligible";
    }

    return 0;
}