#include <iostream>


using namespace std;

int main(){


    int n;

    cin >> n;

    for (int i=0; i<n; i++){
        int g;

        cin >> g;

        int arr[g];

        for (int j=0; j<g; j++){
            cin >> arr[j];
        }
        for (int j=1; j<g-1; j++){
            if (arr[j] != arr[j-1]+1){
                cout << j+1 << endl;
                break;
            }
        }
    }

    





    return 0;
}