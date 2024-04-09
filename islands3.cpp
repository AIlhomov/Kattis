#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);


vector<vector<bool>> visited(50, vector<bool>(50, false));

void dfs(vector<vector<char>> &grid, int i, int j, int r, int c){

    if (i<0 || i>=r || j<0 || j>=c || grid[i][j] == 'W' || visited[i][j]) return;    

    visited[i][j] = true;
    if (grid[i][j] == 'L' || grid[i][j] == 'C'){
        dfs(grid, i+1, j, r, c);
        dfs(grid, i-1, j, r, c);
        dfs(grid, i, j+1, r, c);
        dfs(grid, i, j-1, r, c);
    }
}

int min_islands(vector<vector<char>> &grid, int r, int c){

    int islands = 0;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (grid[i][j] == 'L' && !visited[i][j]){
                dfs(grid, i, j, r, c);
                islands++;
            }
        }
    }

    return islands;
}

int main(){

    int r, c;
    cin >> r >> c;
    vector<vector<char>> grid(r, vector<char>(c));

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> grid[i][j];
        }
    }

    cout << min_islands(grid, r, c) << endl;


    quit;
}
