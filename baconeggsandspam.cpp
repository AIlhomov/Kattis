#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int n;
    string name, food;

    cin >> n;

    while (n != 0) {
        map<string, set<string>> menu;

        for (int i = 0; i < n; i++) {
            cin >> name;
            getline(cin, food);
            stringstream ss(food);
            string f;

            while (ss >> f) {
                menu[f].insert(name);
            }
        }

        for (auto &i : menu) {
            cout << i.first << " ";
            for (auto &j : i.second) {
                cout << j << " ";
            }
            cout << endl;
        }

        cin >> n;
    }


    quit;
}