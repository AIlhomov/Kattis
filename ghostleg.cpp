#include <bits/stdc++.h>

using namespace std;

vector<int> ghostLegPermutation(int n, const vector<int>& rungs) {
    vector<int> lines(n);
    
    for (int i = 0; i < n; ++i) {
        lines[i] = i + 1;
    }

    for (int rung : rungs) {
        int index = rung - 1;
        swap(lines[index], lines[index + 1]);
    }

    return lines;
}

int main() {
    
    int element, rungs;
    cin >> element >> rungs;

    vector<int> a(rungs);
    for (int i = 0; i < rungs; i++) {
        cin >> a[i];
    }

    vector<int> lines = ghostLegPermutation(element, a);

    for (auto line : lines) {
        cout << line << endl;
    }

    return 0;
}