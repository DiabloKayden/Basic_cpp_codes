#include <iostream>
#include <string>
using namespace std;

bool isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=';
}

int main() {
    string expression;
    cout << "Enter the arithmetic expression: ";
    getline(cin, expression);  // Read full line including spaces

    int operatorCount = 0;
    for (char ch : expression) {
        if (isOperator(ch)) {
            operatorCount++;
            cout << "operator" << operatorCount << ": " << ch << endl;
        }
    }

    cout << "Total number of operators: " << operatorCount << endl;

    return 0;
}
