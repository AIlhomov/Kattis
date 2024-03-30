#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b){
    return a.second > b.second; 
}

int main(){

    
    map<string, int> gradings = {
        {"A", 0}, {"B", 0}, {"C", 0}, {"D", 0}, {"E", 0}, {"F", 0}
    };

    // Read grades and update map
    for (int i = 0; i < 5; ++i) {
        int grade;
        cin >> grade;
        gradings[string(1, 'A' + i)] = grade;
    }
    // Read score
    int score;
    cin >> score;

    vector<pair<string, int>> sorted(gradings.begin(), gradings.end());
    sort(sorted.begin(), sorted.end(), cmp);

    for (size_t i = 0; i < sorted.size(); ++i) {
        if (score >= sorted[i].second) {
            cout << sorted[i].first << endl;
            return 0;
        }
    }
    cout << sorted.back().first << endl;
    return 0;
}