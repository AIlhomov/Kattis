#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name, start_date, birth_date;
        int courses;

        cin >> name >> start_date >> birth_date >> courses;

        int start_year = stoi(start_date.substr(0, 4));
        int birth_year = stoi(birth_date.substr(0, 4));

        if ( start_year > 2009 || birth_year > 1990) {
            cout << name << " eligible" << endl;
        } else if (courses > 40) {
            cout << name << " ineligible" << endl;
        } else {
            cout << name << " coach petitions" << endl;
        }
    }

    return 0;
}