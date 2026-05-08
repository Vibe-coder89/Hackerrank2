Problem Description: You are required to implement a generic container class in C++ using class templates. The container should: • Dynamically allocate memory based on user input size • Store elements of different data types (int or float) • Compute and return the sum of elements Task 1. Read an integer n → size of container 2. Read an integer type: o 1 → Integer type o 2 → Float type 3. Based on type, create an object of template class: o Container OR o Container 4. Input n elements 5. Output the sum of elements

Sample Input 5 1 1 2 3 4 5 Sample Output 15

Explanation • If type = 1 → Container is used • If type = 2 → Container is used • Template enables same logic for different data types

Input Format

Input Format n type n elements Where: • n → number of elements • type → data type selector • Next line → n space-separated values

Constraints

Constraints • 1 ≤ n ≤ 100 • type ∈ {1, 2} • Elements range: o Integer: -10^5 to 10^5 o Float: up to 2 decimal precision

Output Format

Output Format sum

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

        
        
        else
            cout << sum;
    }

    return 0;
}
