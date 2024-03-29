#include <bits/stdc++.h>

using namespace std;

int main(){


    string blimp;
    bool found = false;
    for (int i=0; i<5; i++){
        cin >> blimp;
        
        if (blimp.find("FBI") != string::npos){
            cout << i+1 << " ";
            found = true;
        }
    }

    if (!found){
        cout << "HE GOT AWAY!";
    }

    return 0;
}