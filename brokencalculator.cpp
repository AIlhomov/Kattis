#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    ll prev = 1;

    while(n--){
        ll a, b;
        char op;
        cin >> a >> op >> b;

        ll curr = 0;

        switch(op){
            case '+':
                curr = a + b;
                curr -= prev;
                break;
            case '-':
                curr = a - b;
                curr *= prev;
                break;
            case '*':
                curr = a * b;
                curr = curr * curr;
                break;
            case '/':
                curr = a / b;
                if (a % 2 == 0)
                    curr = a / 2;
                else
                    curr = (a + 1) / 2;
                break;
        }

        cout << curr << endl;
        prev = curr;
       
    }
    
    
    quit;
}