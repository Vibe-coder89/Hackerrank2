Create a base class Vehicle that stores the vehicle price. Two classes Tax and Insurance inherit from Vehicle using virtual inheritance. • Tax calculates road tax. • Insurance calculates insurance cost. Create a class TotalCost that inherits from Tax and Insurance and calculates the final vehicle cost. Formula: Total Cost = price + tax + insurance

Input Format

vehicle_price tax insurance

Constraints

Constraints • 10000 ≤ vehicle_price ≤ 10000000 • 1000 ≤ tax ≤ 500000 • 500 ≤ insurance ≤ 100000

Example Input 500000 50000 20000 Output Total Vehicle Cost: 570000

Output Format

Total Vehicle Cost:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int a,b,c;
    cin>>a>>b>>c;
    cout<<"Total Vehicle Cost: "<<a+b+c;
    return 0;
}
