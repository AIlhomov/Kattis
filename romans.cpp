#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double romanDistance;
    cin >> romanDistance;
    int romanPaces = round(1000 * (5280.0 / 4854.0) * romanDistance);
    cout << romanPaces;

    return 0;
}