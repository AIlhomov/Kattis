#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int arr[4] = {a, b, c, d};
    sort(arr, arr + 4);
    cout << arr[0] * arr[2];
    
    
    quit;
}