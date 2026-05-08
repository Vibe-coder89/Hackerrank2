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