#include <bits/stdc++.h>

using namespace std;

int main(){

    string message;
    cin >> message;

    int half = message.size() / 2;
    string first = message.substr(0, half);
    string second = message.substr(half);
    int sum1 = 0, sum2 = 0;

    for (char c : first) sum1 += c - 'A';
    for (char c : second) sum2 += c - 'A';

    for (char &c : first) c = (c - 'A' + sum1) % 26 + 'A';
    for (char &c : second) c = (c - 'A' + sum2) % 26 + 'A';

    for (int i = 0; i < half; i++) {
        first[i] = (first[i] - 'A' + second[i] - 'A') % 26 + 'A';
    }

    cout << first << endl;






    return 0;
}