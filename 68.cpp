#include <iostream>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    int vowels = 0, consonants = 0, digits = 0;

    for(int i = 0; i < s.length(); i++) {

        char ch = tolower(s[i]);

        
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }

        
        else if(ch >= 'a' && ch <= 'z') {
            consonants++;
        }

        else if(ch >= '0' && ch <= '9') {
            digits++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits;

    return 0;
}