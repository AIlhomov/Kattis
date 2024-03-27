#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    while(cin >> n && n != -1){
        if(n == 0) break;
        vector<vector<int>> adj(n, vector<int>(n, 0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> adj[i][j];
            }
        }
        vector<int> weak;
        for(int i = 0; i < n; i++){
            bool isWeak = true;
            for(int j = 0; j < n; j++){
                if(adj[i][j] == 1){
                    for(int k = 0; k < n; k++){
                        if(adj[j][k] == 1 && adj[i][k] == 1){
                            isWeak = false;
                            break;
                        }
                    }
                }
            }
            if(isWeak) weak.push_back(i);
        }
        for(size_t i = 0; i < weak.size(); i++){
            cout << weak[i];
            if(i != weak.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}