#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int main(){

    const int N = 5;
    int arr[N];
    for (int i=0; i<N; i++){
        cin >> arr[i];
    }


    int i=0;
    int j=1;
    
    while (true){
        if (j == N){
            i = 0;
            j = 1;
        }
        if (arr[i] > arr[j]){
            swap(arr[i], arr[j]);

            for (int k=0; k<N; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }

        if (is_sorted(arr, arr + N)) break;

        i++;
        j++;
    }

    quit;
}
