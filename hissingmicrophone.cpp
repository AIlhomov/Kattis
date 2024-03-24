#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool check = 0;
    for (size_t i=0; i<s.length()-1; i++){
        if (s[i] == 's' && s[i+1] == 's'){
            check = 1;
            break;
        }

    }

    if (check){
        cout << "hiss" << endl;
    }
    else{
        cout << "no hiss" << endl;
    }


    return 0;
}