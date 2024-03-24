#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream myFile("basic_string_in.txt");
    
    if (!myFile.is_open()){
        cout << "File not found" << endl;
        return 1;
    }

    string line;
    string searchString = "......"; // Replace "......" with the string you want to search for
    string allLines; // String to store all the lines

    while (getline(myFile, line)){
        if (line.find(searchString) != string::npos) {
            cout << "Found: " << line << endl;
            break; // Break the loop if the string is found
        }
        allLines += line + " "; // Append the current line to the allLines string with a space
    }

    string search;

    cin >> search;

    size_t index = allLines.find(search);
    while (index != string::npos) {
        cout << "Found: " << search << " at index: " << index << endl;
        index = allLines.find(search, index + 1);
    }
    if (allLines.find(search) == string::npos) {
        cout << "Not found: " << search << endl;
    }










    myFile.close();

    cout << "All lines: " << endl;
    cout << allLines << endl; // Print all the lines

    return 0;
}