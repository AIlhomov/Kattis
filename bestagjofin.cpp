#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    map<string, int> m;
    int t;
    cin >> t;

    while (t--){
        string name;
        int fun;
        cin >> name >> fun;
        m[name] = fun;
    }

    auto max_it = max_element(m.begin(), m.end(), [](pair<string, int> a, pair<string, int> b){
        return a.second < b.second;
    });
    
    cout << max_it->first << endl;

    quit;
}