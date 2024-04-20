#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int similiar(const string& s){
    for (int i = s.length() - 1; i > 0; i--){
        unordered_set<string> set;
        bool flag = true;

        for (unsigned int j = 0; j <= s.length() - i; j++){
            string sub = s.substr(j, i);

            if (set.count(sub)) continue;

            if (s.find(sub, j + 1) == string::npos){
                flag = false;
                break;
            }
            set.insert(sub);
        }

        if (flag){
            return i;
        }
        
    }
    return 0;
}

int main() {

    string s;

    while(getline(cin, s)){
        if (!s.empty()){
            cout << similiar(s) << endl;
        }
    }

    quit;
}