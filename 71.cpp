#include <iostream>
using namespace std;

int main() {

    string type;
    cin >> type;

    
    if(type == "int") {

        int a, b;
        cin >> a >> b;

        if(a > b)
            cout << a;
        else
            cout << b;
    }

    
    else if(type == "float") {

        float a, b;
        cin >> a >> b;

        if(a > b)
            cout << a;
        else
            cout << b;
    }

  
    else if(type == "char") {

        char a, b;
        cin >> a >> b;

        if(a > b)
            cout << a;
        else
            cout << b;
    }

  
    else if(type == "string") {

        string a, b;
        cin >> a >> b;

        if(a > b)
            cout << a;
        else
            cout << b;
    }

    else {
        cout << "Invalid";
    }

    return 0;
}