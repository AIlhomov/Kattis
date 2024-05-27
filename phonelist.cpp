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
    
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        
        vector<string> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());
        
        bool flag = true;
        for (int i = 0; i < n - 1; i++){
            if (v[i] == v[i + 1].substr(0, v[i].size())){
                flag = false;
                break;
            }
        }
        
        if (flag){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    
    
    quit;
}