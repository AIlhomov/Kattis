#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int n;

    while (cin >> n) {
        if (n == 0) {
            break;
        }

        vector<int> food(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> food[i];
            sum += food[i];
        }

        int target = sum / 2;
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= target; j++) {
                if (food[i - 1] <= j) {
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - food[i - 1]] + food[i - 1]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        int partition1 = sum - dp[n][target];
        int partition2 = dp[n][target];

        cout << partition1 << " " << partition2 << endl;
    }

    quit;
}