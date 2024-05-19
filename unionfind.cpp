#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;

#define inf 1e9
#define neg_inf -1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second

class UnionFind {
private:
    vi parent, rank;
public:
    UnionFind(int n) {
        parent = vi(n);
        rank = vi(n, 0); // optional speedup
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x != y) {
            if (rank[x] < rank[y]) {
                parent[x] = y;
            } 
            else if (rank[x] > rank[y]) {
                parent[y] = x;
            } 
            else {
                parent[x] = y;
                rank[y]++;
            }
        }
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }
};

int main() {
    fast;
    int N, Q;
    cin >> N >> Q;

    UnionFind uf(N);

    for (int i = 0; i < Q; ++i) {
        char op;
        int a, b;
        cin >> op >> a >> b;
        switch(op) {
            case '=':
                uf.unite(a, b);
                break;
            case '?':
                if (uf.same(a, b)) {
                    cout << "yes\n";
                } else {
                    cout << "no\n"; //the key is to use "\n" instead of "endl" for speedups
                }
                break;
            default:
                break;
        }
    }

    return 0;
}

