#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;

    getline(cin, s);

    for (size_t i=0; i < s.size(); i++){
        if (s[i] == s[i+1]) continue;
        else cout << s[i];
    }
    return 0;
}