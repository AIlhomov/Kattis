#include <bits/stdc++.h>

using namespace std;

#define int long long int
#define ll long long
#define endl "\n"
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define pb push_back
#define mp make_pair
#define pii pair<ll, ll>
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define inf 1e9

typedef pair<ll, ll> pll;
typedef vector<ll> vll;

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve(int n)
{
    int gin = 45, lemon = 30, syrup = 10;

    cout << n * gin << " ml gin\n" << n * lemon << " ml fresh lemon juice\n" << n * syrup << " ml simple syrup\n";
    if (n == 1) cout << n << " slice of lemon\n";
    else cout << n << " slices of lemon\n";
}
signed main()
{

    fastio();
    int n;
    cin >> n;

    solve(n);

    return 0;
}