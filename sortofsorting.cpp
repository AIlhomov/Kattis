#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

template <typename T>
bool sortofsorting(const pair<string, T>& a, const pair<string, T>& b){
    return a.second < b.second;
}

int main(){

    int n;

    while (cin >> n && n != 0){
        vector<pair<string, string>> names;
        names.reserve(n);
        for (int i = 0; i < n; i++){
            string name;
            cin >> name;
            names.emplace_back(name, name.substr(0, 2));
        }

        stable_sort(names.begin(), names.end(), sortofsorting<string>);

        for (auto& name : names){
            cout << name.first << endl;
        }
        cout << endl;
    }


    quit;
}