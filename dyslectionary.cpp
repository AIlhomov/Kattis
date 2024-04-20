#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    vector<string> v;
    string s;
    int maxLen = 0;

    while(true){

        while (getline(cin, s) && !s.empty()) {
            v.push_back(s);
            maxLen = max(maxLen, static_cast<int>(s.length()));
        }
        

        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            return string(a.rbegin(), a.rend()) < string(b.rbegin(), b.rend());
        });

        for (const auto& word : v) {
            cout << right << setw(maxLen) << word << endl;
        }
        if (cin.eof()) break;

        v.clear();
        maxLen = 0;
        
        if (!cin.eof()) {
            cout << endl;
        }
    }


    return 0; //necessary return in this task
}