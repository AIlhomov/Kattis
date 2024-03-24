#include <bits/stdc++.h>

using namespace std;

void generate(int digit, int number, vector<int>& values);

int main(){
    vector<int> values; 
    generate(1, 0, values);


    sort(values.begin(), values.end());

    int value, n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> value;
        if (std::find(values.begin(), values.end(), value) != values.end()) {
            cout << value << endl;
        }
        else {
            for (size_t j=0; j < values.size(); j++){ 
                if (values[j] < value && value < values[j+1]){
                    if (value-values[j] < values[j+1]-value){
                        cout << values[j] << endl;
                    }
                    else cout << values[j+1] << endl;
                }
            }
        }
    }

    return 0;
}

void generate(int digit, int number, vector<int>& values){
    if (number > 200) return;

    if (digit == 1 || digit == 2 || digit == 4 || digit == 5){
        generate(digit+1, number, values);
        generate(digit+3, number, values);
        number = number * 10 + digit;
        if (number <= 200) values.push_back(number);
        generate(digit, number, values);
        generate(digit+1, number, values);
        generate(digit+3, number, values);
    }
   
    if (digit == 3 || digit == 6){
        generate(digit+3, number, values);
        number = number * 10 + digit;
        if (number <= 200) values.push_back(number);
        generate(digit, number, values);
        generate(digit+3, number, values);
    }
    
    if (digit == 7){
        generate(8, number, values);
        number = number * 10 + digit;
        if (number <= 200) values.push_back(number);
        generate(7, number, values);
        generate(8, number, values);
    }
    if (digit == 8){
        generate(9, number, values);
        generate(0, number, values);
        number = number * 10 + digit;
        if (number <= 200) values.push_back(number);
        generate(8, number, values);
        generate(9, number, values);
        generate(0, number, values);
    }
    if (digit == 9){
        number = number * 10 + digit;
        if (number <= 200) values.push_back(number);
        generate(9, number, values);
    }
    if (digit == 0){
        number = number * 10 + digit;
        if (number <= 200) values.push_back(number);
        if (number != 0) generate(0, number, values);
    }
}
