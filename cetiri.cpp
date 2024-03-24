#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};
    if (a > 0 && b > 0 && c > 0) {
        sort(arr, arr + 3); // Sort the array in ascending order
    }
    if (a < 0 && b < 0 && c < 0) {
        sort(arr, arr + 3, greater<int>()); // Sort the array in descending order
    }
    int fourthDigit = 0;
    if (arr[2] - arr[1] > arr[1] - arr[0]) {
        fourthDigit = arr[0] + arr[2] - arr[1];
    }
    else if (arr[2] - arr[1] == arr[1] - arr[0]) {
        fourthDigit = arr[2] + arr[2] - arr[1];
    }
    else fourthDigit = arr[0] + arr[2] - arr[1];
    
    cout << fourthDigit << endl;
    


    return 0;
}
