#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> grid(r, vector<char>(c));

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> grid[i][j];

    int count[5] = {};
    for (int i = 0; i < r - 1; ++i) {
        for (int j = 0; j < c - 1; ++j) {
            int car = 0, blocked = 0;
            for (int k = 0; k < 2; ++k) {
                for (int l = 0; l < 2; ++l) {
                    car += grid[i+k][j+l] == 'X';
                    blocked |= grid[i+k][j+l] == '#';
                }
            }
            if (!blocked) count[car]++;
        }
    }

    for (auto i : count) cout << i << endl;
    return 0;
}
