#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

#define ll long long
#define inf 1e9

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{

    fastio();

    int n;
    cin >> n;

    if (n % 2 == 0) cout << "Alice\n1\n";
    else cout << "Bob\n";
    



    return 0;
}