#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <sstream>

using namespace std;

#define ll long long
#define inf 1e9

void fastio()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int peanoToInt(const string &peano) {
    return count(peano.begin(), peano.end(), 'S');
}

string intToPeano(int n) {
    stringstream peano;
    peano << "";
    for (int i = 0; i < n; ++i) {
        peano << "S(";
    }
    peano << "0";
    for (int i = 0; i < n; ++i) {
        peano << ")";
    }
    return peano.str();
}

int main()
{

    fastio();

    
    string a, b;
    cin >> a >> b;

    int a_int = peanoToInt(a);
    int b_int = peanoToInt(b);

    int product = a_int * b_int;

    cout << intToPeano(product) << endl;



    return 0;
}