#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;

    stack<int> s;
    s.push(0);

    for (int i = 0; i < k; i++){
        string command;
        cin >> command;

        if (command == "undo"){
            int x;
            cin >> x;
            while (!s.empty() && x--){
                s.pop();
            }
        } else {
            int cPos = s.top();
            int newPos = (cPos + stoi(command)) % n;
            if (newPos < 0){
                newPos += n;
            }
            s.push(newPos);
        }
    }

    cout << s.top();

    quit;
}