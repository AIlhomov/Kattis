#include <iostream>
#include <stdio.h> 
#include <ctype.h> 
#include <cstdlib> 
#include <string>

using namespace std;


int main(){


    int n;
    string s;
    cin >> n;

    for (int i=0; i<n; i++){
        cin >> s;

        if (isdigit(s[0])){
            int k=0, svar=0, svar2=0;
            string s2, s3;
            while (s[k] != '+'){
                s2 += s[k];
                k++;
            }
            svar += stoi(s2);
            k++;
            while (s[k] != '\0'){
                s3 += s[k];
                k++;
            }
            svar2 = stoi(s3);
            cout << svar + svar2 << endl;
        }
        else cout << "skipped" << endl;
    }






    return 0;
}