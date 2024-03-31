#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

bool checkWin(char table[3][3], char player){
    for (int i = 0; i < 3; ++i) {
        if (table[i][0] == player && table[i][1] == player && table[i][2] == player){
            return true;
        }
    }

    for (int i = 0; i < 3; ++i) {
        if (table[0][i] == player && table[1][i] == player && table[2][i] == player){
            return true;
        }
    }

    if (table[0][0] == player && table[1][1] == player && table[2][2] == player){
        return true;
    }

    if (table[0][2] == player && table[1][1] == player && table[2][0] == player){
        return true;
    }

    return false;
}

int main(){

    char table[3][3];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> table[i][j];
        }
    }

    if (checkWin(table, 'O')){
        cout << "Jebb";
    } else {
        cout << "Neibb";
    }



    quit;
}