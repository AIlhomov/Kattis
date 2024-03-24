#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    string names[n];
    string decreasing_names[n];
    string increasing_names[n];
    
    for (int i=0; i<n; i++){
        cin >> names[i];
        decreasing_names[i] = names[i];
        increasing_names[i] = names[i];
    }

    sort(decreasing_names, decreasing_names + n, greater<string>());
    sort(increasing_names, increasing_names + n);

    int increasing = 0;
    int decreasing = 0;

    for (int i=0; i<n; i++){
        if (decreasing_names[i] == names[i]){
            decreasing++;
        }
        else if (increasing_names[i] == names[i]){
            increasing++;
        }
    }
   
    if (increasing == n){
        cout << "INCREASING" << endl;
    }
    else if (decreasing == n){
        cout << "DECREASING" << endl;
    }
    else{
        cout << "NEITHER" << endl;
    }

    return 0;
}