#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

ll gcd(ll num, ll num2){
	
	if (num2 == 0) return num;

	return gcd(num2, num % num2);
}

void lcm(ll num, ll num2){
	cout << (num * num2) / gcd(num, num2);
}


int main(){

    ll num, num2;
    cin >> num >> num2;
    cout << gcd(num, num2) << endl;

    quit;
}