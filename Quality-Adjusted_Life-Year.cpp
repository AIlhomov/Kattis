#include <iostream>

using namespace std;

int main(){

	setlocale (LC_ALL, "");
	
	float svar;
	int n;
	cin >> n;
	float a[n],b[n];

	for (int i=0; i<n; i++){
		cin >> a[i] >> b[i];
	}
	
	for (int i=0; i<n; i++){
		a[i] *= b[i];
		svar += a[i];
	}
	
	printf("%0.3f", svar);	

return 0;
}

