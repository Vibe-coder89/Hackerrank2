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