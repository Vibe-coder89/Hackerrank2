#include <iostream>
using namespace std;

int main() {

    int stack[5];
    int top = -1;

    int n;
    cin >> n;

    while(n--) {

        int op;
        cin >> op;

       
        if(op == 1) {

            int x;
            cin >> x;

            
            if(top == 4) {
                cout << "Stack Overflow" << endl;
            }
            else {
                top++;
                stack[top] = x;
            }
        }

      
        else if(op == 2) {

            
            if(top == -1) {
                cout << "Stack Underflow" << endl;
            }
            else {
                cout << "Popped: " << stack[top] << endl;
                top--;
            }
        }
    }

    return 0;
}