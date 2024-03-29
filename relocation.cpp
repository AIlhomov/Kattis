#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, q;

    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    while (q--) {
        int t;
        cin >> t;

        if (t == 1) {
            int k, u;
            cin >> k >> u;
            v[k - 1] = u;
        } else {
            int a, b;
            cin >> a >> b;
            cout << abs(v[a - 1] - v[b - 1]) << endl;
        }
    }

    

    return 0;
}