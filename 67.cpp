#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s;
    cin >> s;

   
    cout << s.length() << endl;

    
    for(int i = 0; i < s.length(); i++) {
        cout << (char)toupper(s[i]);
    }
    cout << endl;

    
    for(int i = 0; i < s.length(); i++) {
        cout << (char)tolower(s[i]);
    }
    cout << endl;

    
    string rev = s;
    reverse(rev.begin(), rev.end());

    cout << rev << endl;

    
    if(s == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}