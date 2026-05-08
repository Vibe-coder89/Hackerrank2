The class must support the following two overloaded operators: 1. [] operator o Used to access or modify elements of the array using index. o Example: obj[i] should return the element at index i.

() operator (Function Call Operator) o Used to calculate the sum of elements between two indices (inclusive). o Example: obj(l, r) should return the sum from index l to r. Example If the array is: 10 20 30 40 50
Then: obj[2] → 30 obj(1,3) → 20 + 30 + 40 = 90

Input Format

First line contains an integer N (size of the array).
Second line contains N integers.
Third line contains an integer Q (number of queries).
Next Q lines contain queries of two types: 1 i x → Replace element at index i with x using [] operator 2 l r → Print sum from index l to r using () operator
Required Class Structure You must implement: class NumberArray { private: int *arr; int n; public: NumberArray(int size);
int& operator[](int index); // access/modify element
int operator()(int l, int r); // sum from l to r };

Constraints

1 ≤ N ≤ 10^5 0 ≤ array elements ≤ 10^6 1 ≤ Q ≤ 10^5 0 ≤ i, l, r < N l ≤ r

Output Format

For every query of type 2, print the sum in a new line.


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
