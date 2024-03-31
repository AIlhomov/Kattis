#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int test_cases;
    cin >> test_cases;

    for (int i = 0; i < test_cases; ++i) {
        int n;
        cin >> n;
        int x[n];

        for (int j = 0; j < n; ++j) {
            cin >> x[j];
        }

        sort(x, x+n);

        cout << (x[n-1] - x[0]) * 2 << endl;

    }


    quit;
}