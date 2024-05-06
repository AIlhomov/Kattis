#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    vector<vector<ll>> v(n, vector<ll>(m, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    
    bool low = false;
    
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            if (v[i][j] < v[i-1][j] && v[i][j] < v[i+1][j] && v[i][j] < v[i][j-1] && v[i][j] < v[i][j+1]) {
                low = true;
                break;
            }
        }
        if (low) {
            break;
        }
    }
    
    if (low) {
        cout << "Jebb" << endl;
    } else {
        cout << "Neibb" << endl;
    }
    
    quit;
}