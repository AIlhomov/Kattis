#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

const int MAXN = 1000;

vector<int> adj[MAXN + 1];
int match[MAXN + 1];
bool visited[MAXN + 1];

bool isBipartite(int u) {
    for (size_t i = 0; i < adj[u].size(); ++i) {
        int v = adj[u][i];
        if (visited[v]) continue;
        visited[v] = true;
        if (match[v] == -1 || isBipartite(match[v])) {
            match[v] = u;
            return true;
        }
    }
    return false;
}

int main() {
    fast;
    int N, M;
    cin >> N >> M;
    
    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    memset(match, -1, sizeof(match));
    int result = 0;
    for (int i = 1; i <= N; ++i) {
        memset(visited, false, sizeof(visited));
        if (isBipartite(i)) ++result;
    }

    if (result != N) {
        cout << "Impossible\n";
    } else {
        for (int i = 1; i <= N; ++i) {
            cout << match[i] << "\n";
        }
    }

    quit;
}