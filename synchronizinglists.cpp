#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    int test_case = -1, num;

    while (cin >> test_case && test_case != 0){
        vector<int> list1, list2;
        unordered_map<int, int> order;

        for (int i = 0; i < test_case; i++){
            cin >> num;
            list1.push_back(num);
        }

        for (int i = 0; i < test_case; i++){
            cin >> num;
            list2.push_back(num);
        }

        vector<int> list1_copy = list1;

        sort(list1.begin(), list1.end());
        sort(list2.begin(), list2.end());

        for (int i = 0; i < test_case; i++){
            order[list1[i]] = list2[i];
        }
        for (int i = 0; i < test_case; i++){
            cout << order[list1_copy[i]] << endl;
        }
        cout << endl;
    }

    quit;
}