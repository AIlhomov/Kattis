#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

struct Friend {
    string name;
    int preference;
    int month;
    int day;
};

bool compare(Friend &a, Friend &b) {
    if (a.month == b.month) {
        return a.day > b.day;
    }
    return a.month < b.month;
}

bool compareName(Friend &a, Friend &b) {
    return a.name < b.name;
}

int main(){

    int n;
    cin >> n;

    vector<Friend> friends(n);

    for (int i = 0; i < n; i++) {
        cin >> friends[i].name >> friends[i].preference;
        char slash;
        cin >> friends[i].day >> slash >> friends[i].month;
    }

    sort(friends.begin(), friends.end(), compare);

    vector<Friend> ans;
    int currentMonth = 0, currentDay = 0;
    Friend fav;

    //iterate through friends and find the one with the highest preference for each day
    for (const auto &fr : friends){
        if (fr.day == currentDay && fr.month == currentMonth) {
            if (fr.preference > fav.preference) {
                fav = fr;
            }
        } else {
            if (currentDay != 0 && currentMonth != 0) {
                ans.push_back(fav);
            }
            currentDay = fr.day;
            currentMonth = fr.month;
            fav = fr;
        }
    }
    
    //check if last friend is not already in the list
    if (!ans.empty() && !(ans.back().day == fav.day && ans.back().month == fav.month)) {
        ans.push_back(fav);
    }
    else if (ans.empty()) {
        ans.push_back(fav);
    }

    sort(ans.begin(), ans.end(), compareName); //sort alphabetically


    cout << ans.size() << endl;
    for (const auto &fr : ans) {
        cout << fr.name << endl;
    }

    quit;
}
