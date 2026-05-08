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