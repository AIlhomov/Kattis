#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

bool is_valid(int x, int y, int n, int m){
    return x >= 0 && x < n && y >= 0 && y < m;
}

void dfs(int x, int y, vector<vector<char>> &grid, vector<vector<bool>> &visited){
    visited[x][y] = true;
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(is_valid(nx, ny, grid.size(), grid[0].size()) && grid[nx][ny] == '-' && !visited[nx][ny]){
            dfs(nx, ny, grid, visited);
        }
    }
}

int main(){
    fast;

    int n, m;
    int t = 1;
    while(cin >> n >> m){
        vector<vector<char>> grid(n, vector<char>(m));
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        rep(i, n){
            rep(j, m){
                cin >> grid[i][j];
            }
        }

        int ans = 0;
        rep(i, n){
            rep(j, m){
                if(grid[i][j] == '-' && !visited[i][j]){
                    dfs(i, j, grid, visited);
                    ans++;
                }
            }
        }

        cout << "Case " << t << ": " << ans << endl;
        t++;
    }
    
    
    
    quit;
}