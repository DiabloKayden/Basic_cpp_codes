
#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment(const string& line) {
    // Check if the line has at least two characters
    if (line.length() < 2) {
        return false; // too short to be a comment
    }

    // Check for '//' at the very start (no leading spaces ignored here)
    if (line[0] == '/' && line[1] == '/') {
        return true; // it's a single-line comment
    }

    return false; // not a comment
}

int main() {
    cout << "Enter a line: ";
    string line;
    getline(cin, line);

    if (isSingleLineComment(line)) {
        cout << "This is a single line comment." << endl;
    } else {
        cout << "This is NOT a single line comment." << endl;
    }

    return 0;
}
