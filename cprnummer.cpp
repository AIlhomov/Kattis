#include <bits/stdc++.h>

using namespace std;

int main(){

    string cpr;
    int sum = 0;
    cin >> cpr;

    for (size_t i = 0; i < cpr.length(); i++){
        if (cpr[i] != '-'){

            if (i == 0){
                sum += (cpr[i] - '0') * 4;
            }
            if (i == 1){
                sum += (cpr[i] - '0') * 3;
            }
            if (i == 2){
                sum += (cpr[i] - '0') * 2;
            }
            if (i == 3){
                sum += (cpr[i] - '0') * 7;
            }
            if (i == 4){
                sum += (cpr[i] - '0') * 6;
            }
            if (i == 5){
                sum += (cpr[i] - '0') * 5;
            }
            if (i == 7){
                sum += (cpr[i] - '0') * 4;
            }
            if (i == 8){
                sum += (cpr[i] - '0') * 3;
            }
            if (i == 9){
                sum += (cpr[i] - '0') * 2;
            }
            if (i == 10){
                sum += (cpr[i] - '0') * 1;
            }
        }
        
        
    }
    if (sum % 11 == 0){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}