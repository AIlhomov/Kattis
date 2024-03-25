#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    int y = m % n;

    for (int i=0; i<n; i++){
        int x = round(m/n);
        

        for (int j=0; j<x; j++){
            cout << "*";
        }
        if (y > i){
            cout << "*";
        }


        cout << endl;
    }








    return 0;
}