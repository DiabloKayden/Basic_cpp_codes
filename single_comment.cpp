#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment(const string& line) {
    // Find first non-space character
    size_t start = line.find_first_not_of(" \t");
    if (start == string::npos) {
        // Line is empty or spaces only
        return false;
    }
    // Check if the first non-space characters are //
    return (line.substr(start, 2) == "//");
}

int main() {
    cout << "Enter the line to check: ";
    string line;
    getline(cin, line);

    if (isSingleLineComment(line)) {
        cout << "This is a single line comment." << endl;
    } else {
        cout << "This is NOT a single line comment." << endl;
    }

    return 0;
}

