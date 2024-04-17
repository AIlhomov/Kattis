#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    map<string, int> tiktok;

    for(int i = 0; i < n; i++){
        int score;
        string name;
        cin >> name >> score;
        tiktok[name] += score;
    }

    int max_score = -inf;
    string winner;

    for(auto it = tiktok.begin(); it != tiktok.end(); it++){
        if(it->second > max_score){
            max_score = it->second;
            winner = it->first;
        }
    }

    cout << winner << endl;

    


    quit;
}