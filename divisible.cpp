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
    int c;
    cin >> c;

    while (c--){
        int d, n;
        cin >> d >> n;

        vector<ll> seq(n);
        for (int i = 0; i < n; i++){
            cin >> seq[i];
        }

        ll count = 0;
        ll sum = 0;
        unordered_map<ll, ll> prefixSumCount;
        prefixSumCount[0] = 1;

        for (int i = 0; i < n; i++){
            sum += seq[i];
            ll remainder = sum % d;
            if (remainder < 0){
                remainder += d;
            }
            count += prefixSumCount[remainder];
            prefixSumCount[remainder]++;
        }

        cout << count << "\n";
    }
    quit;
}