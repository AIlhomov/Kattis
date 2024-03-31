#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);


int dp(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    if (n == 2){
        return 2;
    }
    if (n == 3){
        return 4;
    }
    return dp(n-1) + dp(n-2) + dp(n-3);
}

int main(){

    int n;

    cin >> n;

    cout << dp(n);

    quit;
}