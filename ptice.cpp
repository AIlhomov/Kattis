#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int n;
    cin >> n;

    string s;
    cin >> s;

    string adrian = "ABC";
    string bruno = "BABC";
    string goran = "CCAABB";

    int a = 0;
    int b = 0;
    int g = 0;

    for (int i = 0; i < n; ++i) {
        if (s[i] == adrian[i % 3]){
            a++;
        }
        if (s[i] == bruno[i % 4]){
            b++;
        }
        if (s[i] == goran[i % 6]){
            g++;
        }
    }

    int maxscore = max(a, max(b, g));

    cout << maxscore << endl;

    if (a == maxscore){
        cout << "Adrian" << endl;
    }
    if (b == maxscore){
        cout << "Bruno" << endl;
    }
    if (g == maxscore){
        cout << "Goran" << endl;
    }


    return 0;
}