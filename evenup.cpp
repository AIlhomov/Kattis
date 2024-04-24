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

    vector<int> hand(n);

    for (int i = 0; i < n; i++){
        cin >> hand[i];
    }
    
    stack<int> s;
    for (int i = 0; i < n; i++){
        if (s.empty()){
            s.push(hand[i]);
        } else {
            if ((s.top() + hand[i]) % 2 == 0){
                s.pop();
            } else {
                s.push(hand[i]);
            }
        }
    }

    cout << s.size();
    
    quit;
}