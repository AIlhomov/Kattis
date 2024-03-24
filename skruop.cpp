#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, volume = 7;

    cin >> n;
    cin.ignore();

    for (int i=0; i<n; i++){
        string s;
        getline(cin, s);

        if (s == "Skru op!") {
            volume++;
            if (volume > 10) volume = 10;
        }
        else if (s == "Skru ned!") {
            volume--;
            if (volume < 0) volume = 0;
        }
    }
    cout << volume << endl;

    return 0;
}