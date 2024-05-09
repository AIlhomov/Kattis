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
    
    int n;
    cin >> n;
    cin.ignore();

    unordered_map<string, string> parent;
    unordered_map<string, int> size;

    function<string(string)> find = [&](string x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    };

    function<void(string, string)> unite = [&](string x, string y) {
        string rootX = find(x);
        string rootY = find(y);
        if (rootX != rootY) {
            if (size[rootX] < size[rootY]) {
                swap(rootX, rootY);
            }
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        }
    };

    while (n--) {
        string from, to;
        cin >> from >> to;
        cin.ignore();

        if (parent.find(from) == parent.end()) {
            parent[from] = from;
            size[from] = 1;
        }
        if (parent.find(to) == parent.end()) {
            parent[to] = to;
            size[to] = 1;
        }

        unite(from, to);

        cout << size[find(from)] << endl;
    }
    
    quit;
}