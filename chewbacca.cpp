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
    ll n;
    int k, q;
    cin >> n >> k >> q;

    rep(i, q){
        ll a, b;
        cin >> a >> b;
        if(k == 1){
            cout << abs(a - b) << endl;
            continue;
        }

        ll ans = 0;
        while(a != b){
            if(a < b){
                b = (b + k - 2) / k;
            }else{
                a = (a + k - 2) / k;
            }
            ans++;
        }
        cout << ans << endl;
    }


    quit;
}