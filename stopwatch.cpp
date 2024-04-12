#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int n;
    cin >> n;

    vector<int> times(n);
    for (int i = 0; i < n; i++) {
        cin >> times[i];
    }

    int timer = 0;
    bool isRunning = false;

    for (int i = 0; i < n; i++) {
        if (isRunning) {
            timer += times[i] - times[i - 1];
        }
        isRunning = !isRunning;
    }

    if (isRunning) {
        cout << "still running";
    }

    else {
        cout << timer;
    }






    quit;
}