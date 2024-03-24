#include <iostream>


using namespace std;

int main(){


    double x,y;

    cin >> x >> y;

    if (y == 1) {
        if (x == 0) {
            cout << "ALL GOOD" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    } else {
        cout << fixed;
        cout.precision(10);
        double temperature = static_cast<double>(x) / (1 - y);
        cout << temperature << endl;
    }








    return 0;
}