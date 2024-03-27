#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    cin.ignore();

    string s;

    for(int i = 0; i < n; i++){
        getline(cin, s);
        if(s.substr(0, 10) == "Simon says"){
            cout << s.substr(10) << endl;
        }
    }

    return 0;
}