#include <bits/stdc++.h>

using namespace std;

int main(){

    int test_cases;
    

    while (cin >> test_cases && test_cases != -1){
        int total_distance = 0;
        int last_time = 0;
        for (int i=0; i<test_cases; i++){
            int speed, time;
            cin >> speed >> time;
            total_distance += speed * (time - last_time);
            last_time = time;
        }
        cout << total_distance << " miles" << endl;
    }



    return 0;
}