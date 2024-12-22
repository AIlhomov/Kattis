#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

bool canSplit(vector<int> &weights, int k, int maxWeight){
    int count = 0;
    int sum = 0;
    for(unsigned int i = 0; i < weights.size(); i++){
        if(weights[i] > maxWeight) return false;
        if(sum + weights[i] > maxWeight){
            count++;
            sum = weights[i];
        }else{
            sum += weights[i];
        }
    }
    count++;
    return count <= k;
}

int binarySearch(vector<int> &weights, int k){
    int left = 0;
    int right = inf;
    while(left < right){
        int mid = left + (right - left) / 2;
        if(canSplit(weights, k, mid)){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    return left;
}

int main(){
    fast;
    
    int n, k;
    cin >> n >> k;

    vector<int> weights(n);
    rep(i, n) cin >> weights[i];

    
    cout << binarySearch(weights, k) << endl;
    
    
    
    quit;
}