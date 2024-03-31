#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, sum = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int w;
        cin >> w;

        sum += w;
    }

    if (sum % 3 == 0 && sum / 3) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}