#include <iostream>
using namespace std;

void find_min_max(int arr[], int size, int &min_val, int &max_val) {
    // Initialize min and max to the first element of the array
    min_val = arr[0];
    max_val = arr[0];

    // Loop through the array to find the min and max
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];  // Update min if current element is smaller
        }
        if (arr[i] > max_val) {
            max_val = arr[i];  // Update max if current element is larger
        }
    }
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

    int min_val, max_val;
    find_min_max(arr, size, min_val, max_val);

    cout << "The minimum value in the array is: " << min_val << endl;
    cout << "The maximum value in the array is: " << max_val << endl;

    return 0;
}

