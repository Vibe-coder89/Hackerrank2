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
