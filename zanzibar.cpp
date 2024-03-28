#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n = -1;
    cin >> t;

    while(t--){
        int total = 0;
        int prev = 0;
        while (true){
            cin >> n;
            if (n == 0) break;
            if (n > 2*prev){
                total += n - 2*prev;
            }
            prev = n;
        }
        cout << total-1 << endl;
    }

    return 0;
}