#include <iostream>

using namespace std;

int main(){

    int x, n;
    cin >> x >> n;
    int svar = x * (n + 1);
    for (int i = 0; i < n; i++){
        int p;
        cin >> p;
        svar -= p;
    }
    cout << svar;
    

    return 0;
}