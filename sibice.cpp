#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, w, h;
    cin >> n >> w >> h;
    cin.ignore();

    int max_length = sqrt(w*w + h*h);

    for (int i=0; i<n; i++){
        int length;
        cin >> length;
        cin.ignore();
        if (length <= max_length) cout << "DA\n";
        else cout << "NE\n";
    }

    return 0;
}