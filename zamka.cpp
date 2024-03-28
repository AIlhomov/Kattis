#include <bits/stdc++.h>

using namespace std;



int main(){

    int l, d, x, n, m;
    cin >> l >> d >> x;

    for (int i = l; i <= d; i++){
        int sum = 0;
        int temp = i;
        while (temp > 0){
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == x){
            n = i;
            break;
        }
    }

    for (int i = d; i >= l; i--){
        int sum = 0;
        int temp = i;
        while (temp > 0){
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == x){
            m = i;
            break;
        }
    }

    cout << n << endl << m << endl;

    return 0;
}