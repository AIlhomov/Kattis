#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int calculateSteps(vector<ll>& heights, int n) {
    int steps = 0;
    vector<int> line;
    
    for (int i = 0; i < n; i++) {
        int pos = upper_bound(line.begin(), line.end(), heights[i]) - line.begin();
        steps += line.size() - pos;
        line.insert(line.begin() + pos, heights[i]);
    }
    
    return steps;
}

int main() {
    int p, data_number;
    cin >> p;

    vector<ll> a(20);

    for (int i = 0; i < p; i++) {
        cin >> data_number;
        for (int j = 0; j < 20; j++) {
            cin >> a[j];
        }
        int steps = calculateSteps(a, 20);
        cout << data_number << " " << steps << endl;
        a.clear();
    }

    quit;
}