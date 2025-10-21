#include <iostream>
#include <string>
using namespace std;

bool isCommentLine(const string& line) {
    string trimmed = line;

    // Remove leading spaces
    size_t start = trimmed.find_first_not_of(" \t");
    if (start != string::npos) {
        trimmed = trimmed.substr(start);
    } else {
        // Line is empty or spaces only
        return false;
    }

    // Check for single-line comment
    if (trimmed.substr(0, 2) == "//") {
        return true;
    }

    // Check for multi-line comment start
    if (trimmed.substr(0, 2) == "/*") {
        return true;
    }

    // For multi-line comment end detection, normally we need to read multiple lines
    // but here we just check if the line ends with */
    if (!trimmed.empty() && trimmed.size() >= 2) {
        if (trimmed.substr(trimmed.size() - 2) == "*/") {
            return true;
        }
    }

    return false;
}

int main() {
    cout << "Enter the line to check: ";
    string line;
    getline(cin, line);

    if (isCommentLine(line)) {
        cout << "This is a comment line." << endl;
    } else {
        cout << "This is NOT a comment line." << endl;
    }

    return 0;
}

