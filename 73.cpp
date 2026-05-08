#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int choice;
    cin>>choice;
    if(choice ==1){
    int a;
        cin>>a;
        cout<<a*a;
    }
    
    else if(choice==2){
        int a,b;
        cin>>a>>b;
        cout<<a*b;
        }
    else if(choice==3){
        float a;
        cin>>a;
        cout<<a*a*3.14;
    }
        return 0;
}
