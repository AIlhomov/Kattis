#include <bits/stdc++.h>

using namespace std;

int main(){

    int width, n;
    cin >> width >> n;

    int area = 0;
    for (int i = 0; i < n; i++) {
        int wi, li;
        cin >> wi >> li;
        area += wi * li;
    }
    cout << area / width << endl;

    return 0;
}