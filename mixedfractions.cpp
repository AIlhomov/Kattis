#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, d;

    while (cin >> n >> d && n != 0 && d != 0){
        cout << n/d << " " << n%d << " / " << d << endl;
    }
    
    return 0;
}