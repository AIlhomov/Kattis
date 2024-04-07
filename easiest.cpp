#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findSmallestInteger(int n, int multiplier = 11) {
    int targetSum = sumOfDigits(n);
    int product = n * multiplier;
    
    if (sumOfDigits(product) == targetSum) {
        return multiplier;
    }
    
    return findSmallestInteger(n, multiplier + 1);
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        cout << findSmallestInteger(n) << endl;
    }
    quit;
}
