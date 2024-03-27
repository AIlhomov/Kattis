#include <bits/stdc++.h>

#define PI 3.14159265358979323846

using namespace std;

int main(){


    int h, v;

    cin >> h >> v;

    sinf(v * PI / 180.0) > 0 ? cout << ceil(h / sin(v * PI / 180.0)) << endl : cout << ceil(h / sin(v * PI / 180.0)) * -1 << endl;

    return 0;
}