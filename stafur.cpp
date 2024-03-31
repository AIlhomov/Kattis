#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main() {
    string vowels = "AEIOU";
    string consonants = "BCDFGHJKLMNPQRSTVWXZ";

    string s;
    cin >> s;

    bool vowelFound = false;
    bool consonantFound = false;

    for (char c : s) {
        if (vowels.find(c) != string::npos) {
            cout << "Jebb";
            vowelFound = true;
            break;
        }
    }

    for (char c : s) {
        if (consonants.find(c) != string::npos) {
            cout << "Neibb";
            consonantFound = true;
            break;
        }
    }

    if (!vowelFound && !consonantFound) {
        cout << "Kannski";
    }

    quit;
}