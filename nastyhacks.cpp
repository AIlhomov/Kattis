#include <iostream>

using namespace std;

int main(){

    int n, r,e,c;


    cin >> n;

    for (int i=0; i<n; i++){
        cin >> r >> e >> c;

        if (r < e-c){
            cout << "advertise" << endl;
        } else if (r == e-c){
            cout << "does not matter" << endl;
        } else {
            cout << "do not advertise" << endl;
        }
    }






    return 0;
}