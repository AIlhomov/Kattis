#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iomanip>

using namespace std;

#define ll long long
#define inf 1e9

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

struct Runner {
    string name;
    double a, b; 
};

bool cmp(const Runner &a, const Runner &b) {
    return a.b < b.b;
}

int main()
{

    fastio();

    int n;
    cin >> n;

    vector<Runner> runners(n);

    for (int i=0; i<n; i++)
    {
        cin >> runners[i].name >> runners[i].a >> runners[i].b;
    }

    double min_time = inf;
    vector<string> best_team;

    for (int i=0; i<n; i++){
        vector<Runner> other_runners;

        for (int j=0; j<n; j++){
            if (i != j){
                other_runners.push_back(runners[j]);
            }
        }

        sort(other_runners.begin(), other_runners.end(), cmp);

        double time = runners[i].a + other_runners[0].b + other_runners[1].b + other_runners[2].b;

        if (time < min_time){
            min_time = time;
            best_team.clear();
            best_team.push_back(runners[i].name);
            best_team.push_back(other_runners[0].name);
            best_team.push_back(other_runners[1].name);
            best_team.push_back(other_runners[2].name);
        }
    }

    cout << fixed << setprecision(9) << min_time << endl;

    for (int i=0; i<4; i++){
        cout << best_team[i] << endl;
    }

   
    



    return 0;
}