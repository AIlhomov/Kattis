#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

void generate_fibo(vector<int> &fib, int n) {
    fib.push_back(0);
    fib.push_back(1);

    while (fib.back() < n) {
        int next = fib[fib.size() - 1] + fib[fib.size() - 2];
        if (next > n) break;
        fib.push_back(next);
    }
}

void fibo(int n){
    
    vector<int> fib;
    
    generate_fibo(fib, n);

    vector<int> sequence;
    int sum = 0;

    for (int i = fib.size() - 1; i > 0; i--) {
        if (sum + fib[i] <= n) {
            sequence.push_back(fib[i]);
            sum += fib[i];
        }
    }

    if (find(fib.begin(), fib.end(), n) != fib.end()) {
        cout << n;
        quit;
    }
    
    for (int i = sequence.size() - 1; i >= 0; i--) {
        cout << sequence[i] << " ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    fibo(n);
    
    quit;
}