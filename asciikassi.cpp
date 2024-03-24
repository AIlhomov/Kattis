#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;

    cin >> n;

    if (n == 0){
        cout << "++\n++\n";
        return 0;
    }

    cout << "+" + string(n, '-') + "+\n";

    for (int i=0; i<n; i++){
        cout << "|" + string(n, ' ') + "|\n";
    }

    cout << "+" + string(n, '-') + "+\n";

    return 0;
}