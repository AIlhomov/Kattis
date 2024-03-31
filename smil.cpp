#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] == ':' && s[i + 1] == ')') {
            cout << i << endl;
        }
        if (s[i] == ';' && s[i + 1] == ')') {
            cout << i << endl;
        }
        if (s[i] == ';' && s[i + 1] == '-' && s[i + 2] == ')') {
            cout << i << endl;
        }
        if (s[i] == ':' && s[i + 1] == '-' && s[i + 2] == ')') {
            cout << i << endl;
        }
    }

    return 0;
}