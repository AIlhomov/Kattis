#include <iostream>
#include <cmath>

using namespace std;

bool isWholeNumber(double number) {
    return fmod(number, 1) == 0;
}

int main(){

    int x, y, n;

    cin >> x >> y >> n;

    for (int i = 1; i <= n; i++) {
        if (isWholeNumber(i / static_cast<double>(x)) && isWholeNumber(i / static_cast<double>(y))) {
            cout << "FizzBuzz" << endl;
        }
        else if (isWholeNumber(i / static_cast<double>(x))) {
            cout << "Fizz" << endl;
        }
        else if (isWholeNumber(i / static_cast<double>(y))) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}