#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<string>> l(m, vector<string>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> l[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < m; ++i) {
        set<string> seen;
        for (int j = 0; j < n; ++j) {
            if (seen.find(l[i][j]) != seen.end()) {
                count++;
            } else {
                seen.insert(l[i][j]);
            }
        }
    }

    cout << count << endl;

    return 0;
}
