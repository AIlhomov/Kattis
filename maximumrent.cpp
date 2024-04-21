#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int maxRent(int a, int b, int c, int sigma){
    
    int maxRent = 0;
    for(int i = c - 1; i > 0; i--){
        int y = c - i;
        if (2 * i + y >= sigma){
            maxRent = max(maxRent, a * i + b * y);
        }
    }
    return maxRent;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << maxRent(a, b, c, d) << endl;
    
    quit;
}