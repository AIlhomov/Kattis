#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

ll lcm(ll a, ll b){
    return a * b / gcd(a, b);
}

void solve(int n){
    while (n--){
        int w;
        cin >> w;

        vector<ll> p(w);

        for (int i = 0; i < w; i++) {
            cin >> p[i];
        }

        ll res = p[0];

        for (int i = 1; i < w; i++) {
            res = lcm(res, p[i]);
            if (res > inf){
                cout << "More than a billion." << endl;
                break;
            }

        }

        if (res <= inf)
            cout << res << endl;

    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    solve(n);

    quit;
}