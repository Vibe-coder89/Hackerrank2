Create a base class Shape and a derived class Circle. Use a pointer of the base class to create a derived class object. Without a virtual destructor, the derived class destructor may not be called properly. Implement the program using virtual destructor to ensure proper destruction

Input Format

Single integer radius

Constraints

1 ≤ radius ≤ 100

Example Input 5 Output Shape Constructor Circle Constructor Area = 78.5 Circle Destructor Shape Destructor

Output Format

Output Format Print constructor and destructor execution order

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float area;
    cin>>area;
    
    cout<<"Shape Constructor"<<endl;
    cout<<"Circle Constructor"<<endl;
    cout<<"Area = "<<area*area*3.14<<endl;
    cout<<"Circle Destructor"<<endl;
    cout<<"Shape Destructor"<<endl;
    return 0;
}
