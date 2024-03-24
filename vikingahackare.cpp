#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int t;
    cin >> t;

    map<string, char> charMap;
    for (int i = 0; i < t; i++) {
        char c;
        string binary;
        cin >> c >> binary;
        charMap[binary] = c;
    }

    string runestone;
    cin >> runestone;

    string translation;
    for (size_t i = 0; i < runestone.length(); i += 4) {
        string substr = runestone.substr(i, 4);
        if (charMap.count(substr) > 0) {
            translation += charMap[substr];
        } else {
            translation += "?";
        }
    }

    cout << translation << endl;

    return 0;
}