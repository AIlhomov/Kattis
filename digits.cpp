#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;

    while(getline(cin, s) && s != "END"){
        
        if(s == "1"){
            cout << 1 << endl;
            continue;
        }

        int i = 1;
        while(to_string(s.size()) != s){
            s = to_string(s.size());
            i++;
        }

        cout << i << endl;
        
    }

    
    
    quit;
}