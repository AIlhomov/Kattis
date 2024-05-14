#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int dx[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

bool is_valid(vector<vector<char>> &g, int i, int j) {
    int n = g.size(), m = g[0].size();
    return (i < 0 || i >= n || j < 0 || j >= m || g[i][j] == '2');
}

void flood_fill(vector<vector<char>>& g, int i, int j){
    int n = g.size(), m = g[0].size();
    queue<pll> q;
    q.push({i, j});
    g[i][j] = '2'; // mark as visited

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k][0], ny = y + dx[k][1];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && g[nx][ny] == '0') {
                g[nx][ny] = '2'; // mark as visited
                q.push({nx, ny});
            }
        }
    }

}

void solve(vector<vector<char>> &g, int &totalCost){
    totalCost = 0;
    int n = g.size(), m = g[0].size();

    //Mark all water cells, start from edges
    for (int i = 0; i < n; i++) {
        if (g[i][0] == '0') flood_fill(g, i, 0);
        if (g[i][m - 1] == '0') flood_fill(g, i, m - 1);
    }

    for (int j = 0; j < m; j++) {
        if (g[0][j] == '0') flood_fill(g, 0, j);
        if (g[n - 1][j] == '0') flood_fill(g, n - 1, j);
    }


    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (g[i][j] == '1'){
                for (int k=0; k<4; k++){
                    int ni = i + dx[k][0], nj = j + dx[k][1];
                    if (is_valid(g, ni, nj)){
                        totalCost++;
                    }
                }
            }
        }
    }
}

int main(){
    fast;
    
    int n, m;
    cin >> n >> m;

    vector<vector<char>> g(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    int totalCost;
    solve(g, totalCost);
    cout << totalCost;
    
    
    quit;
}