#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <climits>

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

    int r, c, d;
    cin >> r >> c >> d;
    
    int n;

    vector<vector<int>> v(r, vector<int>(c));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int current = v[i][j] / d;
            int m = INT_MAX;

            // find min adj, up left right down
            if (i > 0)
                m = min(m, v[i - 1][j] / d); // up
            if (i < r - 1)
                m = min(m, v[i + 1][j] / d); // down
            if (j > 0)
                m = min(m, v[i][j - 1] / d); // left
            if (j < c - 1)
                m = min(m, v[i][j + 1] / d); // right

            //int diff = (current - m) / d;

            if (current <= m)
                cout << " ";
            else if (current == m + 1)
                cout << "+";
            else if (current == m + 2 )
                cout << "X";
            else
                cout << "#";
            //cout << current;

        }
        cout << endl;
    }



    return 0;
}