#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int test_cases;
    cin >> test_cases;

    while(test_cases--){
        string s;
        cin >> s;

        int n = sqrt(s.size());
        char ans[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                ans[i][j] = s[i * n + j];
            }
        }
        for (int i = n-1; i >= 0; i--){
            for (int j = 0; j < n; j++){
                cout << ans[j][i];
            }
        }
        cout << endl;
        
    }

    
    return 0;
}