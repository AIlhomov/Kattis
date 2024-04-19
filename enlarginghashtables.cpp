#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

bool isPrime(ll num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

ll getNextPrime(int num) {
    ll nextPrime = num + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }
    return nextPrime;
}

int main() {
    ll n;
    cin >> n;

    while (n != 0) {
        ll m = 2 * n;
        bool foundPrime = false;

        while (!foundPrime) {
            if (isPrime(m)) {
                foundPrime = true;
            } else {
                m = getNextPrime(m);
            }
        }

        if (isPrime(n)) {
            cout << m << endl;
        } else {
            cout << m << " (" << n << " is not prime)" << endl;
        }

        cin >> n;

    }

    quit;
}
