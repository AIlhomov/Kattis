#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> socks(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> socks[i];
    }

    stack<int> s, t;
    int count = 0;

    for (int i = 2 * n - 1; i >= 0; i--) {
        s.push(socks[i]);
    }

    while (!s.empty()) {
        if (!t.empty() && s.top() == t.top()) {
            s.pop();
            t.pop();
        } else {
            t.push(s.top());
            s.pop();
        }
        count++;
    }

    if (t.empty()) {
        cout << count << endl;
    } else {
        cout << "impossible" << endl;
    }
    
    
    quit;
}