#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int svar = 2;
    for (int i = 0; i < n; i++){
        svar = svar * 2 - 1;
    }
    cout << svar * svar;
    

    return 0;
}