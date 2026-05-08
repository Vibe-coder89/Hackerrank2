#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {

        string shape;
        cin >> shape;

        
        if(shape == "Rectangle") {

            double length, width;
            cin >> length >> width;

            double area = length * width;

            cout << fixed << setprecision(2);
            cout << "Area = " << area << endl;
        }

       
        else if(shape == "Circle") {

            double radius;
            cin >> radius;

            double area = 3.14 * radius * radius;

            cout << fixed << setprecision(2);
            cout << "Area = " << area << endl;
        }
    }

    return 0;
}