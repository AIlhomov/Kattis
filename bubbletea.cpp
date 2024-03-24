#include <bits/stdc++.h>

using namespace std;

int main(){

    int n=0, toppings=0, money=0;

    cin >> n;
    int prices[n] = { 0 };
    for (int i=0; i<n; i++){
        cin >> prices[i];
    }

    cin >> toppings;
    int topping_prices[toppings] = { 0 };
    for (int i=0; i<toppings; i++){
        cin >> topping_prices[i];
    }


    int min_price = INT_MAX;
    for (int i=0; i<n; i++){
        int k=0;
        cin >> k;
        while(k--){
            int value = 0;
            cin >> value;
            if (prices[i] + topping_prices[value-1] < min_price){
                min_price = prices[i] + topping_prices[value-1];
            }
        }
    }
    cin >> money;

    if (money >= min_price){
        cout << (money / min_price)-1 << endl;
    }
    else{
        cout << "0" << endl;
    }

    return 0;
}