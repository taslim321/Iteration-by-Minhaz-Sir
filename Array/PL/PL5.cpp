#include <iostream>
using namespace std;

// Function to input the array elements
void inputArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to find the first repeating element
int findFirstRepeating(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1; // Return -1 if no repeating element is found
}

// Function to output the result
void outputResult(int repeatingElement) {
    if (repeatingElement != -1) {
        cout << "The first repeating element is: " << repeatingElement << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Input the array elements
    inputArray(arr, size);

    // Find the first repeating element
    int repeatingElement = findFirstRepeating(arr, size);

    // Output the result
    outputResult(repeatingElement);

    return 0;
}
