#include <bits/stdc++.h>

using namespace std;

int main(){

    int r, c, zr, zc;

    cin >> r >> c >> zr >> zc;

    char matrix[r][c];
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i=0; i<r; i++){
        for (int j=0; j<zr; j++){
            for (int k=0; k<c; k++){
                for (int l=0; l<zc; l++){
                    cout << matrix[i][k];
                }
            }
            cout << endl;
        }
    }



    return 0;
}