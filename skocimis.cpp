#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    if (b - a > c - b) cout << b - a - 1;
    else cout << c - b - 1;


    quit;
}