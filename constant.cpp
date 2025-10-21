#include<iostream>
#include<string>
using namespace std;


bool numeric_constant(const string& input){
    for(char c : input){
        if (!isdigit(c)){
            return false;
        }
    }
    return !input.empty();
}
int main() {
    string input;
    cout << "Enter the input: ";
    cin >> input;

    if (numeric_constant(input)) {
        cout << "The content is a numeric constant" << endl;
    } else {
        cout << "The content is not numeric" << endl;
    }

    return 0;
}
