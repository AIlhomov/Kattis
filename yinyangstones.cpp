#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    int w = 0;
    int b = 0;

    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == 'W'){
            w++;
        }else{
            b++;
        }
    }

    if (w == b){
        cout << 1;
    }else{
        cout << 0;
    }
    
    
    quit;
}