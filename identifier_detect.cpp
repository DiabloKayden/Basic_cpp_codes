#include <iostream>
#include <cctype>
#include <string>

using namespace std;

bool is_valid_identifier(const string& identifier) {
    // Check if the identifier is empty
    if (identifier.empty()) {
        return false;
    }

    // Check if the first character is an alphabet or underscore
    if (!(isalpha(identifier[0]) || identifier[0] == '_')) {
        return false;
    }

    // Check if the rest of the characters are alphanumeric or underscore
    for (size_t i = 1; i < identifier.length(); ++i) {
        if (!(isalnum(identifier[i]) || identifier[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a string to check if it's a valid identifier: ";
    cin >> input;

    if (is_valid_identifier(input)) {
        cout << "'" << input << "' is a valid identifier." << endl;
    } else {
        cout << "'" << input << "' is not a valid identifier." << endl;
    }

    return 0;
}

