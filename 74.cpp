#include <iostream>
using namespace std;

int main() {

    int n, type;
    cin >> n >> type;

    
    if(type == 1) {

        int arr[100];
        int sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        cout << sum;
    }

    
    else if(type == 2) {

        float arr[100];
        float sum = 0;

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            sum = sum + arr[i];
        }

        
        if(sum == (int)sum)
            cout << (int)sum;
        else
            cout << sum;
    }

    return 0;
}