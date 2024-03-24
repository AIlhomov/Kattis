#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    arr[0] = 1; // Jimmy is always the first person in line

    for (int i = 1; i < n; i++) {
        int k;
        cin >> k;
        arr[k + 1] = i + 1; 
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}