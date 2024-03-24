#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

int calculateRollValue(int a, int b) {
    if (b > a) swap(b, a);
    if (a == 2 && b == 1) {
        return 10000;
    }
    if (a == b) {
        
            return a * 100;
        
    } else {
        int rollValue = max(a, b) * 10 + min(a, b);
        return rollValue;
    }
}



string checkWin(int s0, int s1, int r0, int r1) {
    int sInt = calculateRollValue(s0, s1);
    int rInt = calculateRollValue(r0, r1);

    if (sInt > rInt) {
        return "Player 1 wins.";
    } else if (rInt > sInt) {
        return "Player 2 wins.";
    } else {
        return "Tie.";
    }
}

int main() {
    int s0, s1, r0, r1;

    while (true) {
        cin >> s0 >> s1 >> r0 >> r1;
        if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) {
            break;
        }
        cout << checkWin(s0, s1, r0, r1) << endl;
    }

    return 0;
}