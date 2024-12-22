#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast;
    
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> mines;
    
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < m; j++) {
            if (row[j] == '*') {
                //Mine's position in 1-based index
                mines.push_back({i + 1, j + 1});
            }
        }
    }

    cout << mines.size() << endl;

    for (const auto& mine : mines) {
        cout << mine.first << " " << mine.second << endl;
    }
    
    
    
    quit;
}