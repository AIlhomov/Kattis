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
    
    int c, p, x, l;
    cin >> c >> p >> x >> l;
    
    vector<int> adj[c+1];
    vector<int> deg(c+1, 0);

    rep(i, p){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }

    queue<int> q;
    vector<bool> vis(c+1, false);
    q.push(l);
    vis[l] = true;

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : adj[u]){
            if(vis[v]) continue;
            deg[v]--;
            if(deg[v] <= adj[v].size()/2){
                q.push(v);
                vis[v] = true;
            }
        }
    }

    if(vis[x]) cout << "leave";
    else cout << "stay";
    
    
    quit;
}