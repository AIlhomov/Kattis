#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

string lucky(int n){
    string res = "";
    while (n){
        int exp = static_cast<int>(log2(n + 1));
        int limit = (1 << exp) - 1;
        int mid = 1 << (exp - 1);
        if (limit <= n && n < limit + mid){
            res += '4';
            n -= mid;
        } else {
            res += '7';
            n -= 2 * mid;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    cout << lucky(n);

    
    quit;
}
