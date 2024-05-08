#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

const int MOD = 1e9 + 7;

int countBinaryStrings(int n) {
    vector<ll> dp(n + 1);
    dp[0] = 1;
    dp[1] = 2;
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }
    return dp[n];
}

int main() {
    fast;
    
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << countBinaryStrings(n) << endl;
    }
    
    quit;
}