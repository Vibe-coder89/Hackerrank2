#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[1000];

    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int q;
    cin >> q;

    while(q--) {

        int type;
        cin >> type;

        
        if(type == 1) {

            int i, x;
            cin >> i >> x;

            arr[i] = x;
        }

     
        else {

            int l, r;
            cin >> l >> r;

            int sum = 0;

            for(int i = l; i <= r; i++) {
                sum = sum + arr[i];
            }

            cout << sum << endl;
        }
    }

    return 0;
}