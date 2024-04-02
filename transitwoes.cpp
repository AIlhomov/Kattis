#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int s, t, n;
    cin >> s >> t >> n;

    vector<int> d(n+1), b(n), c(n);

    for(int i = 0; i < n+1; i++){
        cin >> d[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        cin >> c[i];
    }

    for (int i = 0; i < n; i++){
        s += b[i];
        s += (d[i+1] - d[i]);
        s = max(s, c[i]);
    }

    if (s + b[n-1] + d[n] <= t){
        cout << "yes";
    } else {
        cout << "no";
    }

    quit;
}