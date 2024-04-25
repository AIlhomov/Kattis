#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

struct element{
    int count;
    int value;
    int index;
};

bool cmp(element a, element b){
    return a.value < b.value;
}

bool cmp2(element a, element b){
    if (a.count != b.count){
        return a.count < b.count;
    }
    return a.index > b.index;
}

void sortByfreq(int arr[], int n){
    
    element freq[n];
    for (int i = 0; i < n; i++){
        freq[i].index = i;
        freq[i].count = 0;
        freq[i].value = arr[i];
    }

    stable_sort(freq, freq + n, cmp);

    freq[0].count = 1;

    for (int i = 1; i < n; i++){
        if (freq[i].value == freq[i - 1].value){
            freq[i].count += freq[i - 1].count + 1;

            freq[i - 1].count = -1;

            freq[i].index = freq[i-1].index;
        } else freq[i].count = 1;
    }

    stable_sort(freq, freq + n, cmp2);
    for (int i = n - 1, index = 0; i >= 0; i--){
        if (freq[i].count != -1){
            for (int j = 0; j < freq[i].count; j++){
                arr[index++] = freq[i].value;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, _;
    cin >> n >> _;
    
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    sortByfreq(v.data(), n);

    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    
    
    quit;
}