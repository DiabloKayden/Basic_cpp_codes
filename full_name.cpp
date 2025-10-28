#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_name, last_name, full_name;

    // Input first and last name
    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "Enter your last name: ";
    cin >> last_name;

    // Concatenate first name, a space, and last name
    full_name = first_name + " " + last_name;

    // Output the full name
    cout << "Full name: " << full_name << endl;

    return 0;
}

