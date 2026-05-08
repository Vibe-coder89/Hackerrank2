You are given an initially empty vector of integers. Perform CRUD operations on the vector based on user queries. The operations are: 1. CREATE x → Insert element x into the vector 2. READ → Print all elements of the vector 3. UPDATE i x → Update the element at index i with value x 4. DELETE i → Delete the element at index i Input Format • First line contains an integer Q — number of queries • Next Q lines contain operations in the format:

CREATE x READ UPDATE i x DELETE i Output Format • For every READ operation, print elements of the vector separated by space • If the vector is empty, print: Empty • If an invalid index is provided for UPDATE or DELETE, print: Invalid index

Constraints • 1 ≤ Q ≤ 1000 • -10⁵ ≤ x ≤ 10⁵ • 0 ≤ i < current vector size Sample:: • CREATE adds elements • READ displays elements • UPDATE modifies element at index • DELETE removes element

Input Format

Input Format • First line contains an integer Q — number of queries • Next Q lines contain operations in the format:

CREATE x READ UPDATE i x DELETE i

Constraints

Constraints • 1 ≤ Q ≤ 1000 • -10⁵ ≤ x ≤ 10⁵ • 0 ≤ i < current vector size Sample:: • CREATE adds elements • READ displays elements • UPDATE modifies element at index • DELETE removes element

Output Format

Output Format • For every READ operation, print elements of the vector separated by space • If the vector is empty, print: Empty • If an invalid index is provided for UPDATE or DELETE, print: Invalid index

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int Q;
    cin >> Q;

    vector<int> v;

    while(Q--) {

        string op;
        cin >> op;

       
        if(op == "CREATE") {

            int x;
            cin >> x;

            v.push_back(x);
        }

        
        else if(op == "READ") {

            if(v.empty()) {
                cout << "Empty";
            }
            else {

                for(int i = 0; i < v.size(); i++) {
                    cout << v[i] << " ";
                }
            }

            cout << endl;
        }

        
        else if(op == "UPDATE") {

            int i, x;
            cin >> i >> x;

            if(i < 0 || i >= v.size()) {
                cout << "Invalid index" << endl;
            }
            else {
                v[i] = x;
            }
        }

    
        else if(op == "DELETE") {

            int i;
            cin >> i;

            if(i < 0 || i >= v.size()) {
                cout << "Invalid index" << endl;
            }
            else {
                v.erase(v.begin() + i);
            }
        }
    }

    return 0;
}
