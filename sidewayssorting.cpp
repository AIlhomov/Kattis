#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

vector<vector<char>> transpose(vector<vector<char>>& matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<char>> transposed(m, vector<char>(n));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

bool cmp(const vector<char>& a, const vector<char>& b){
    for (size_t i=0; i<a.size(); i++){
        if (tolower(a[i]) != tolower(b[i])){
            return tolower(a[i]) < tolower(b[i]);
        }
    }
    return false;
}

int main() {
    int n, m;
    while(cin >> n >> m && n != 0 && m != 0){
        vector<vector<char>> c(n, vector<char>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> c[i][j];
            }
        }

        //Transpose the grid
        auto transposed = transpose(c);

        //Sort the grid by rows
        stable_sort(transposed.begin(), transposed.end(), cmp);

        //Transpose the grid back
        c = transpose(transposed);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << c[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    
    return 0;
}