#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// Function to check if the line is a single-line comment
bool isSingleLineComment(const string &line) {
    return (line.substr(0, 2) == "//");
}

// Function to check if the line is a multi-line comment
bool isMultiLineComment(const string &line) {
    return (line.substr(0, 2) == "/*" && line.find("*/") != string::npos);
}

int main() {
    char ch;
    string inputLine;

    cout << "Enter a line of code (Press Enter to finish input):\n";

    // Using getch() to take input character by character for single-line comment checking
    ch = getchar();
    while (ch != '\n' && ch != EOF) {
        inputLine += ch;
        ch = getchar();
    }

    // Checking if the input is a comment
    if (isSingleLineComment(inputLine)) {
        cout << "This is a single-line comment.\n";
    } else if (isMultiLineComment(inputLine)) {
        cout << "This is a multi-line comment.\n";
    } else {
        cout << "This is not a comment.\n";
    }

    return 0;
}

