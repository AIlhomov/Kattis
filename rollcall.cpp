#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define inf 1e9
#define quit cout << endl; exit(0);

//Function to extract the last name from a full name
string extractLastName(const string& fullName) {
    size_t pos = fullName.find_last_of(' ');
    if (pos != string::npos) {
        return fullName.substr(pos + 1);
    }
    return fullName;
}

string extractFirstName(const string& fullName) {
    size_t pos = fullName.find_last_of(' ');
    if (pos != string::npos) {
        return fullName.substr(0, pos);
    }
    return fullName;
}

//Comparator function to sort names by last name
bool compareNames(const pair<string, int>& name1, const pair<string, int>& name2) {
    string lastName1 = extractLastName(name1.first);
    string lastName2 = extractLastName(name2.first);
    if (lastName1 != lastName2) {
        return lastName1 < lastName2;
    }
    else {
        string firstName1 = extractFirstName(name1.first);
        string firstName2 = extractFirstName(name2.first);
        return firstName1 < firstName2;
    }
}

string checkIfNameExists(const string& name, map<string, int>& names) {

    string firstName = extractFirstName(name);

    if (count_if(names.begin(), names.end(),
    [&](const pair<string, int>& p) { return extractFirstName(p.first) == firstName; }) > 1) {
        return name;
    }

    return firstName;
}

int main() {

    string name;
    map<string, int> names;
    int i = 1;
    while (getline(cin, name)) {
        if (name == "") {
            break;
        }
        names.insert({name, i});
        i++;
    }

    //Sort the names by last name and first name
    vector<pair<string, int>> sortedNames(names.begin(), names.end());
    sort(sortedNames.begin(), sortedNames.end(), compareNames);

    for (const auto& name : sortedNames) {
        cout << checkIfNameExists(name.first, names) << endl;
    }

    quit;
}