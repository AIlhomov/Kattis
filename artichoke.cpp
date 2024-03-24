#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double price(int p, int a, int b, int c, int d, int k) {
    return p * (sin(a * k + b) + cos(c * k + d) + 2);
}


int main(){


    int p,a,b,c,d,n;

    cin >> p >> a >> b >> c >> d >> n;

    double max = -1;
    double maxDiff = 0;
    double min = -1;

    for (int i = 1; i <= n; i++) {
        double currentPrice = price(p, a, b, c, d, i);
        if (currentPrice > max) {
            max = currentPrice;
            min = currentPrice;
        }   
        if (currentPrice < min || min == -1) {
            min = currentPrice;
        } 
        if (max - min > maxDiff) {
            maxDiff = max - min;
        }
    }
    cout << setprecision(12) << maxDiff;




    return 0;
}