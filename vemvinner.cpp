#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int checkWin(vector<vector<char>> grid){
    rep(i, 3){
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]){
            if (grid[i][0] == 'X'){
                return 1;
            }
            else if (grid[i][0] == 'O'){
                return 2;
            }
        }
    }

    rep(i, 3){
        if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]){
            if (grid[0][i] == 'X'){
                return 1;
            }
            else if (grid[0][i] == 'O'){
                return 2;
            }
        }
    }

    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
        if (grid[0][0] == 'X'){
            return 1;
        }
        else if (grid[0][0] == 'O'){
            return 2;
        }
    }

    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]){
        if (grid[0][2] == 'X'){
            return 1;
        }
        else if (grid[0][2] == 'O'){
            return 2;
        }
    }

    return 0;
}

int main(){
    fast;
    
    vector<vector<char>> grid(3, vector<char>(3));

    rep(i, 3){
        rep(j, 3){
            cin >> grid[i][j];
        }
    }

    int winner = checkWin(grid);
    
    if (winner == 1){
        cout << "Johan har vunnit\n";
    }
    else if (winner == 2){
        cout << "Abdullah har vunnit\n";
    }
    else{
        cout << "ingen har vunnit\n";
    }
    
    quit;
}