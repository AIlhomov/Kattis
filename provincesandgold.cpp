#include <iostream>

using namespace std;

int main(){
    int g, s, c;
    cin >> g >> s >> c;
    int total = g*3 + s*2 + c;
    if (total >= 8) cout << "Province or ";
    else if (total >= 5) cout << "Duchy or ";
    else if (total >= 2) cout << "Estate or ";
    if (total >= 6) cout << "Gold";
    else if (total >= 3) cout << "Silver";
    else cout << "Copper";
    return 0;
}