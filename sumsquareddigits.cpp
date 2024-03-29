#include <bits/stdc++.h>

using namespace std;

int main(){

    int p;
    cin >> p;

    while (p--) {
        int k, b, n;
        cin >> k >> b >> n;

        int sum = 0;
        while (n) {
            sum += (n % b) * (n % b);
            n /= b;
        }

        cout << k << " " << sum << endl;
    }

    return 0;
}