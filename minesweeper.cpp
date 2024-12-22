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
    
    int n, m, k;

    cin >> n >> m >> k;

    vector<vector<char>> board(n, vector<char>(m, '.'));

    rep(i, k){
        int x, y;
        cin >> x >> y;
        x--; y--;
        board[x][y] = '*';
    }

    rep(i, n){
        rep(j, m){
            cout << board[i][j];
        }
        cout << endl;
    }
    
    quit;
}