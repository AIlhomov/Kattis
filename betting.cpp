#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main() {
    float a;
    cin >> a;

    float probability = 100 / a;
    float probability2 = 100 / (100 - a);

    cout << setprecision(13) << fixed << probability << endl << probability2 << endl;

    quit;
}