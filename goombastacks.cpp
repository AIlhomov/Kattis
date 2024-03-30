#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, current, threshold, sum = 0, count = 0;
    bool possible = false;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> current >> threshold;
        sum += current;

        if (sum >= threshold) count++;

    }
    if (count == n) possible = true;
    cout << (possible ? "possible" : "impossible") << endl;

    return 0;
}
