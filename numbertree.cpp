#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    int h;
    string s;
    cin >> h >> s;
    int n = 1 << (h + 1);
    int ans = 0;
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == 'L'){
            ans = ans * 2 + 1;
        }else{
            ans = ans * 2 + 2;
        }
    }
    cout << n - ans - 1;

    
    quit;
}