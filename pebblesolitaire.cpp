//this solves both pebblesolitaire and pebblesolitaire2 problems, because we use a map to store the values of the strings, 
//so we can reuse them in the future (DP)

#include <bits/stdc++.h>

using namespace std;

map<string, int> dp;

int pebbles(string a){

    if (dp.find(a) != dp.end()) return dp[a];

    int count = 0;


    for (size_t i = 0; i < a.size(); i++){
        if (a[i] == 'o'){
            count++;
        }
    }

    for (size_t i = 0; i < a.size()-2; i++) {
        if (a[i] == 'o' && a[i + 1] == 'o' && a[i + 2] == '-') {
            a[i] = '-';
            a[i + 1] = '-';
            a[i + 2] = 'o';
            int value = pebbles(a);
            if (value < count) count = value;
            a[i] = 'o';
            a[i + 1] = 'o';
            a[i + 2] = '-';
        }
    }
    for (size_t i = a.size()-1; i >= 2; i--){
        if (a[i] == 'o' && a[i - 1] == 'o' && a[i - 2] == '-') {
            a[i] = '-';
            a[i - 1] = '-';
            a[i - 2] = 'o';
            int value = pebbles(a);
            if (value < count) count = value;
            a[i] = 'o';
            a[i - 1] = 'o';
            a[i - 2] = '-';
        }
    }
    dp.insert({a, count});
    return count;
}

int main() {

    string s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << pebbles(s) << endl;
    }
    return 0;
}