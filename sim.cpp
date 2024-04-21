#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int t;
    cin >> t;
    string s;

    cin.ignore();

    while (t--){
        getline(cin, s);
        
        list<char> q;
        auto cursor = q.begin();

        for (size_t i = 0; i < s.size(); i++){
            switch(s[i]){
                case '<':
                    if (cursor != q.begin()){
                        cursor = q.erase(--cursor);
                    }
                    break;
                case '[':
                    cursor = q.begin();
                    break;
                case ']':
                    cursor = q.end();
                    break;
                default:
                    q.insert(cursor, s[i]);
                    break;
            }
        }
        string s2 = "";
        for (auto i : q){
            s2 += i;
        }
        cout << s2 << endl;
    }

    quit;
}