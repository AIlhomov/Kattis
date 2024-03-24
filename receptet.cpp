#include <iostream>

using namespace std;

int main(){

	setlocale (LC_ALL, "");

	long long int N,svar=0;
	
	cin >> N;
	
	int h[N], b[N], k[N];
	
	for (int n=0; n<N; n++){
		cin >> h[n] >> b[n] >> k[n];
	}
	
	for (int n=0; n<N; n++){
		if (h[n] < b[n]){
			b[n] -= h[n];
			svar += k[n] * b[n];
			//cout << svar << " ";
		}
		else
			continue;
	}
	cout << svar;
	
return 0;
}

