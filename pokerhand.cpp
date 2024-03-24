#include <bits/stdc++.h>

using namespace std;

int main(){

    string cards[5];

    for (int i=0; i<5; i++){
        cin >> cards[i];
    }

    sort(cards, cards + 5);

    int max_count = 1;
    int count = 1;
    for (int i=1; i<5; i++){
        if (cards[i][0] == cards[i-1][0]){
            count++;
            max_count = max(max_count, count);
        }
        else{
            count = 1;
        }
    }

    cout << max_count << endl;

    return 0;
}
