#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    ll n;

    while (scanf("%lld", &n) != EOF){
        ll sum = 1;
        ll sqrtN = sqrt(n);

        for (ll i = 2; i <= sqrtN; i++) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) {
                    sum += n / i;
                }
            }
        }

        if (sum == n) {
            cout << n << " perfect" << endl;
        } else if (abs(sum - n) <= 2) {
            cout << n << " almost perfect" << endl;
        } else {
            cout << n << " not perfect" << endl;
        }
    }

    quit;
}