#include <iostream>
#include <vector> 

using namespace std;

int main(){

	setlocale (LC_ALL, "");

	int n, svar=0, bana=1;
	

	cin >> n;

	vector<int> a(n); 

	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	for (int i=0; i<n; i++){
		
		if (a[i] > 7){
			a[i] = 7;
		}
		
		
		// par 2
		if (bana % 2 == 1 && a[i] > 2){
			svar += a[i] - 2;
		}
		else if (bana % 2 == 1 && a[i] < 2){
			svar += a[i] - 2;
		}
		
		
		
		//par 3
		if(bana % 2 == 0 && a[i] > 3){
			svar += a[i] - 3;
		}
		else if (bana % 2 == 0 && a[i] < 3){
			svar += a[i] - 3;
		}
		
		//cout << svar << " ";
		bana++;
	}
	cout << svar;

return 0;
}

