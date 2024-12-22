#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

int main(){
    fast;
    
    int n, m;
    cin >> n >> m;

    vector<int> fish_weights(n);
    for (int i = 0; i < n; i++) {
        cin >> fish_weights[i];
    }

    vector<pair<int, int>> fishmongers(m);
    for (int i = 0; i < m; i++) {
        cin >> fishmongers[i].first >> fishmongers[i].second;
    }

    sort(fish_weights.begin(), fish_weights.end(), greater<int>());

    sort(fishmongers.begin(), fishmongers.end(), [](pair<int, int>& a, pair<int, int>& b) {
        return compare(a, b);
    });

    ll profit = 0;
    int fish_index = 0;

    for (int i = 0; i < m && fish_index < n; i++) {
        ll buy = fishmongers[i].first;
        ll price_kg = fishmongers[i].second;

        while (buy > 0 && fish_index < n) {
            profit += fish_weights[fish_index] * price_kg;
            fish_index++;
            buy--;
        }
    }

    cout << profit;
    
    
    
    quit;
}