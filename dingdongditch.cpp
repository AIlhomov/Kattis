#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<ll> door(n + 1, 0);

    for (int i = 1; i <= n; i++){
        door[i] = door[i - 1] + v[i - 1];
    }
    
    while (q--){
        int x;
        cin >> x;

        cout << door[x] << endl;
    }
   
    quit;
}