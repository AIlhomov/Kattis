#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;

#define inf 1e9
#define quit cout << endl; exit(0);
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main(){
    fast;
    
    string s;
    stringstream ss(s);

    string date;
    getline(cin, date);

    ss << date;

    string day, month, year;
    getline(ss, day, '/');
    getline(ss, month, '/');
    getline(ss, year);

    int d = stoi(day);
    int m = stoi(month);
    
    if (m > 12){
        cout << "US";
    }
    else if (d > 12){
        cout << "EU";
    }
    else{
        cout << "either";
    }    

    quit;
}