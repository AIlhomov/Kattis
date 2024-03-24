#include <iostream>
#include <vector> // Add missing include
#include <ostream> // Include the <ostream> header

using namespace std;

int main(){

    
    int n, m, k;

    //n is the number of rows, m is the number of columns, and k is the number of classes
    
    vector<string> s2; // Declare the variable 's2' as a vector of strings

    cin >> n >> m >> k;

    for (const auto& str : s2) {
        cout << str << endl;
    }
    int svar = 0; // Initialize svar to 0
    for (int i=0; i<n-1; i++){ // Change loop condition to n-1
        for (int j=0; j<m; j++){
            if (s2[i][j] == s2[i+1][j]) svar=0;
            else svar++;
        }
    }
    cout << svar;

    return 0;
}