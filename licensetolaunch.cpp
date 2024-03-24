#include <iostream>

using namespace std;

int main(){


    int n;

    cin >> n;

    int min = 1000000;
    int minIndex = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < min) {
            min = x;
            minIndex = i;
        }
    }
    cout << minIndex;









    return 0;
}