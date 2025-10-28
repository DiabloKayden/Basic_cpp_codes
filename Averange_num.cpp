#include <iostream>
using namespace std;

double calculate_average(int arr[], int size) {
    int sum = 0;
    // Calculate the sum of all elements in the array
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    // Return the average value
    return static_cast<double>(sum) / size;
}

int main() {
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];  // Declare an array of the given size

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];  // Input array elements
    }

    // Calculate and display the average value of the array elements
    double average = calculate_average(arr, size);
    cout << "The average value of the array elements is: " << average << endl;

    return 0;
}

