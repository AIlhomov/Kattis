#include <bits/stdc++.h>

using namespace std;

int main(){

    int h, k, v, s;
    int distance = 0;

    cin >> h >> k >> v >> s;

    while (h > 0){
        v += s;
        v -= floor(max(1, v / 10));
        if (v >= k) h++;
        if (0 < v && v < k) {
            h--;
            if (h == 0) v = 0;
        }
        if (v <= 0){
            v = 0;
            h = 0;
        }

        distance += v;
        if (s > 0) s--;
    }

    cout << distance << endl;

    return 0;
}