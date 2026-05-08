Create two classes: Base Class → Stack This class should: • Store elements in an array • Provide the following functions: o push(int) o pop() This class does NOT perform validation.

Derived Class → ValidatedStack This class should inherit from Stack and: • Override both functions: o push(int) o pop() Validation Rules When push() is called: • If stack is full → print Stack Overflow • Otherwise call base class push() function When pop() is called: • If stack is empty → print Stack Underflow • Otherwise call base class pop() function Example Input 6 1 10 1 20 1 30 2 2 2 Output Popped: 30 Popped: 20 Popped: 10

Input Format

n operation1 operation2 operation3 ... Where operation can be: 1 x → push x 2 → pop For invalid operations: Stack Overflow Stack Underflow

Constraints

1 ≤ n ≤ 20 Stack size = 5 -100 ≤ value ≤ 100

Output Format

For every valid pop: Popped:

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
