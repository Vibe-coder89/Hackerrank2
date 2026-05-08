Design a class StringAnalyzer that performs various operations on a given string using Object-Oriented Programming concepts. The class should support the following operations: 1. Store the string 2. Find the length of the string 3. Convert the string to uppercase 4. Convert the string to lowercase 5. Reverse the string 6. Check whether the string is a palindrome

Description In this problem, you will implement a class that encapsulates string operations. You must use class, member functions, and encapsulation to solve the problem.

Input Format

Input Format • A single string S (without spaces)

→ Palindrome

Constraints

Constraints • 1≤∣S∣≤10001 \leq |S| \leq 10001≤∣S∣≤1000 • String contains only alphabets (A–Z, a–z)

Sample Input madam Sample Output 5 MADAM madam madam Palindrome

Explanation • Reverse of "madam" is same

Output Format

Output Format Print the following outputs: 1. Length of string 2. Uppercase string 3. Lowercase string 4. Reversed string 5. "Palindrome" or "Not Palindrome" Each output should be printed on a new line.

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
