#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

bool checkPrime(int n){
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i <= sqrt(n); i += 2){
        if (n % i == 0) return false;
    }

    return true;
}

void primeFactors(int x){
    
    int steps = 0;
    while (!checkPrime(x)) {
        int sum_of_primes = 0;
        int number = x;
        for (int i = 2; i <= number / i; ++i) {
            while (number % i == 0) {
                sum_of_primes += i;
                number /= i;
            }
        }
        if (number > 1) {
            sum_of_primes += number;
        }
        x = sum_of_primes;
        steps++;
    }
    cout << x << " " << steps + 1 << endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true){
        
        int x;
        cin >> x;

        if (x == 4){
            quit;
        }

        primeFactors(x);
        
    }


    quit;
}