#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define PI 3.14159265358979323846

float circleArea(float r) {
    return PI * r * r;
}

float estimatedArea(float c, float m, float r) {
    return (c / m) * r * r * 4;
}

int main(){

    float r, m, c;
    cin >> r >> m >> c;

    while (r != 0 || m != 0 || c != 0) {
        cout << fixed << setprecision(6) << circleArea(r) << " " << estimatedArea(c, m, r) << endl;
        cin >> r >> m >> c;
    }

    


    quit;
}