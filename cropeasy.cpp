#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

vector<pll> generateTrees(int n, int A, int B, int C, int D, int x0, int y0, int M) {
    vector<pll> trees(n);
    trees[0] = {x0, y0};
    ll x = x0, y = y0;
    for (int i = 1; i < n; ++i) {
        x = (A * x + B) % M;
        y = (C * y + D) % M;
        trees[i] = {x, y};
    }
    return trees;
}

int countValidTriangles(vector<pll>& trees) {
    int n = trees.size();
    int count = 0;

    rep(i, n) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                ll xSum = trees[i].first + trees[j].first + trees[k].first;
                ll ySum = trees[i].second + trees[j].second + trees[k].second;
                if (xSum % 3 == 0 && ySum % 3 == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    fast;
    
    int T;
    cin >> T;

    rep(t, T) {
        int n, A, B, C, D, x0, y0, M;
        cin >> n >> A >> B >> C >> D >> x0 >> y0 >> M;

        vector<pll> trees = generateTrees(n, A, B, C, D, x0, y0, M);

        int result = countValidTriangles(trees);

        cout << "Case #" << t + 1 << ": " << result << endl;
    }

    quit;
}
