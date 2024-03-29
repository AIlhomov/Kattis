#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    vector<string> v;
    stringstream ss(s);
    string token;

    while (getline(ss, token, ';')) {
        if (token.find('-') != string::npos) {
            size_t pos = token.find('-');
            int start = stoi(token.substr(0, pos));
            int end = stoi(token.substr(pos + 1));
            for (int i = start; i <= end; i++) {
                v.push_back(to_string(i));
            }
        } else {
            v.push_back(token);
        }
    }

    cout << v.size() << endl;

    return 0;
}