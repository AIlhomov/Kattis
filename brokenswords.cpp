#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int swords;
    cin >> swords;

    vector<vector<int>> TBLR;
    string numbers;

    for (int i = 0; i < swords; ++i) {
        cin >> numbers;
        vector<int> swordSlats;
        for (char digit : numbers) {
            swordSlats.push_back(digit - '0'); 
        }
        TBLR.push_back(swordSlats);
    }

    int TB = 0, LR = 0;
    for (int i = 0; i < swords; ++i) {
        for (int j = 0; j < 4; ++j) { 
            if (j == 0 || j == 1) {
                if (TBLR[i][j] == 0) {
                    TB++;
                }
            } else if (j == 2 || j == 3) {
                if (TBLR[i][j] == 0) {
                    LR++;
                }
            }
        }
    }

    int TB_complete = TB / 2;
    int LR_complete = LR / 2;

    int total_swords = min(TB_complete, LR_complete);

    int TB_remaining = TB - (total_swords * 2);
    int LR_remaining = LR - (total_swords * 2);

    cout << total_swords << " " << TB_remaining << " " << LR_remaining << endl;

    return 0;
}
