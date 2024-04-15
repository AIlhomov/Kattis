#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    float v, a, t;

    cin >> v >> a >> t;

    cout << fixed << setprecision(13) << v*t + (a*t*t)/2 << endl;


    quit;
}