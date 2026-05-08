
Using STL Vectors Given a sentence, reverse the order of words. Using StringStream for handling each word using space delimeter and storing into container vectors and showing it into reverse order Iterators

Input Format: • A single line string s

Output Format: • Print reversed sentence

Constraints: • 1≤ ∣ s ∣≤ 10^51

Input Format

Input Format: • A single line string s

Constraints

Constraints: • 1≤ ∣ s ∣≤ 10^51

1 I love C++ C++ love I 2 Hello World World Hello 3 One Two Three Three Two One 4 a b c c b a 5 Coding is fun fun is Coding

Output Format

Output Format: • Print reversed sentence

#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {

    string s;
    getline(cin, s);

    vector<string> words;

    stringstream ss(s);

    string word;

    
    while(ss >> word) {
        words.push_back(word);
    }

    
    for(int i = words.size() - 1; i >= 0; i--) {

        cout << words[i];

        if(i != 0)
            cout << " ";
    }

    return 0;
}
