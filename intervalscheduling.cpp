#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

template <typename T>
bool intervalsorting(const pair<T, T>& a, const pair<T, T>& b){
    return a.second < b.second;
}

int main(){

    int n;
    cin >> n;

    vector<pair<int, int>> intervals;
    intervals.reserve(n);

    for (int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        intervals.emplace_back(start, end);
    }

    sort(intervals.begin(), intervals.end(), intervalsorting<int>);

    int count = 1;
    int end = intervals[0].second;

    for (int i = 1; i < n; i++){
        if (intervals[i].first >= end){
            count++;
            end = intervals[i].second;
        }
    }

    cout << count;

    quit;
}