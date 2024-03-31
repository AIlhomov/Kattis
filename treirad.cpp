#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    ll n;
    cin >> n;

    ll count = 0;
    for (ll i = 1; i * (i + 1) * (i + 2) < n; ++i) {
        count++;
    }

    cout << count; 

    quit;
}