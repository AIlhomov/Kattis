#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

int pyramid(int blocks, int level = 1){
    int blocksneeded = (2 * level-1) * (2 * level-1);
    if (blocksneeded > blocks){
        return level-1;
    }
    return pyramid(blocks - blocksneeded, level+1);
}

int main(){

    int n;
    cin >> n;
    
    cout << pyramid(n);

    quit;
}