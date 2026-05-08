You are required to design a program using Abstract Classes in C++. Create an abstract base class Shape that contains a pure virtual function to calculate the area of a shape. Two derived classes Rectangle and Circle must implement the area calculation differently. The program should read input specifying the type of shape and its dimensions, then calculate and display the area using runtime polymorphism. Description Abstract Base Class: Shape Member Function • virtual double area() = 0; → Pure virtual function

Derived Class: Rectangle Data Members • length • width Area Formula Area = length × width

Derived Class: Circle Data Member • radius Area Formula Area = π × radius × radius (Use π = 3.14)

Input Format

Input Format 1. First line contains an integer N representing number of shapes. 2. Next N lines contain shape information: Rectangle length width Circle radius

Constraints

Constraints • 1 ≤ N ≤ 100 • 1 ≤ length, width, radius ≤ 1000 • Use abstract class and runtime polymorphism

Sample Input 3 Rectangle 10 5 Circle 7 Rectangle 4 6

Sample Output Area = 50.00 Area = 153.86 Area = 24.00

Output Format

Output Format For each shape print the calculated area. Output format: Area = value Round the value to 2 decimal places.



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
