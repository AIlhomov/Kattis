#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

template <typename T>
bool is_pivot(T &org, T &arr, int i, bool isMax){
    if (isMax){
       return arr[i] <= org[i];
    } else {
        return arr[i] >= org[i];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> maxV(n);
    vector<int> minV(n);

    for (int i = 0; i < n; i++){
        if (i == 0){
            maxV[i] = v[i];
        } else {
            maxV[i] = max(maxV[i - 1], v[i]);
        }
    }

    for (int i = n - 1; i >= 0; i--){
        if (i == n - 1){
            minV[i] = v[i];
        } else {
            minV[i] = min(minV[i + 1], v[i]);
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++){
        if (is_pivot(v, maxV, i, true) && is_pivot(v, minV, i, false)){
            count++;
        }
    }

    cout << count;


    quit;
}