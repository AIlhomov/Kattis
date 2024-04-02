#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int binarySearchRight(vector<ll>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;
        if (arr[mid] == target){
            return mid;
        }
        if (arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }

    return left;
}

int main(){

    int n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    a.reserve(n);
    b.reserve(m);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    for (int i = 0; i < m; i++) {
        
        int index = binarySearchRight(a, b[i]);

        ans += a[index] - b[i];

    }
    cout << ans;

    quit;
}