#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, p, s;

    cin >> n >> p >> s;

    for(int i = 0; i < s; i++){
        int a;
        cin >> a;
        bool found = false;
        for(int j = 0; j < a; j++){
            int b;
            cin >> b;
            if(b == p){
                found = true;
            }
        }
        if(found){
            cout << "KEEP" << endl;
        } else {
            cout << "REMOVE" << endl;
        }
    }

    return 0;
}