#include <bits/stdc++.h>

using namespace std;

int main(){


    int a, b, c;

    cin >> a >> b >> c;

    int d = b*b - 4*a*c;

    if (d > 0){
        cout << 2 << endl;
    }
    else if (d == 0){
        cout << true << endl;
    }
    else{
        cout << false << endl;
    }

    return 0;
}