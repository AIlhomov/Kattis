#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

bool is_palindrome([[maybe_unused]] const string& s, unordered_map<char, int> freq){
    int odd = 0;
    for (auto& [key, value] : freq){
        if (value % 2 != 0){
            odd++;
        }
    }
    return odd <= 1;
    
}


int palindrome(string s, int n){


    int count = 0;

    while (true){
        int i = 0;
        int j = n-1;

        while (i < j){
            if (s[i] == s[j]){
                i++;
                j--;
            }
            else{
                int k = j;
                while (s[i] != s[k] && k > i){
                    k--;
                }
                if (k == i){
                    swap(s[i], s[i+1]);
                    count++;
                }
                else{
                    for (int l=k; l<j; l++){
                        swap(s[l], s[l+1]);
                        count++;
                    }
                }
            }
        }

        if (is_palindrome(s, unordered_map<char, int>{})){
            break;
        }
    }

    return count;
    
}

int main(){

    int test_cases;
    cin >> test_cases;

    string s;

    while(test_cases--){
        cin >> s;
        int n = s.size();
        unordered_map<char, int> freq;
        for (char& c : s){
            freq[c]++;
        }
        if (!is_palindrome(s, freq)){
            cout << "Impossible" << endl;
            continue;
        }

        cout << palindrome(s, n) << endl;

    }

    quit;
}