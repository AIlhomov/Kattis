#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

bool is_palindrome(const string &s){
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

int countPalindromicNumbers(int a, int b, int k) {

    int count = 0;
    for (int i = a; i <= b; i++) {

        string s = to_string(i);
        bool isPalindromic = true;


        for (int base = 2; base <= k; base++) {
            string num = "";
            int n = i;
            while (n > 0) {
                num += to_string(n % base);
                n /= base;
            }
            if (!is_palindrome(num)) {
                isPalindromic = false;
                break;
            }
        }
        if (isPalindromic) {
            count++;
        }
    }
    return count;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b, k;
    cin >> a >> b >> k;

    int res = countPalindromicNumbers(a, b, k);
    cout << res << endl;
    
    quit;
}

