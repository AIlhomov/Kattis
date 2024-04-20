#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    string s, name;

    while (n--){
        int k;
        cin >> k;

        cin.ignore();

        getline(cin, name);

        bool foundPea = false, foundSoup = false;

        for (int i = 0; i < k; i++){
            getline(cin, s);
            if (s == "pea soup"){
                foundPea = true;
            }
            if (s == "pancakes"){
                foundSoup = true;
            }
        }

        if (foundPea && foundSoup){
            cout << name << endl;
            quit;
        }
       
    }

    cout << "Anywhere is fine I guess" << endl;
    
    
    quit;
}