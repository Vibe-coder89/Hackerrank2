You are given an integer value representing the number of minutes. Create a class Time that converts this integer into an object representing hours and minutes. Use a conversion constructor to convert the integer value into a Time object. Finally, display the time in the format: Hours: H Minutes: M

Description: In C++, a conversion constructor allows a basic data type (like int) to be converted into an object of a class. For this problem: • The input will be a single integer N representing total minutes • Convert this integer into a Time object • Extract: o Hours = N / 60 o Minutes = N % 60 • Print the converted time Validations: if user enters non-integer value => Invalid input! Please enter a valid number negative minutes not allowed => Invalid input! Minutes cannot be negative Only valid input goes to the constructor

Input Format

A single integer N representing total minutes Required Class Design

You must use: class Time { int hours; int minutes; public: Time(int totalMinutes); // Conversion constructor void display(); };

Constraints

1 ≤ N ≤ 100000

Output Format

Print the converted time in the format: Hours: H Minutes: M Or Invalid input! Please enter a valid number Invalid input! Minutes cannot be negative

#include <iostream>
using namespace std;

class Time
{
    int hours;
    int min;

public:
    Time(int totalMin)
    {
        hours = totalMin / 60;
        min = totalMin % 60;
    }

    void display()
    {
        cout << "Hours: " << hours << " "<< "Minutes: " << min << endl;
    }
};

int main(){

    int n;
    cin >> n;

    if(cin.fail()){
        cout << "Invalid input! Please enter a valid number.";
        return 0;
    }

    if(n < 0){
        cout << "Invalid input! Minutes cannot be negative.";
        return 0;
    }

    Time t = n;
    t.display();

    return 0;
}
