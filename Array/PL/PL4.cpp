#include <iostream>
using namespace std;

// Function to input the array elements
void inputArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

// Function to output the array elements
void outputArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to separate even and odd numbers in the array
void separateEvenOdd(int arr[], int size) {
    int temp[size];
    int index = 0;

    // First store even numbers
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            temp[index++] = arr[i];
        }
    }

    // Then store odd numbers
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            temp[index++] = arr[i];
        }
    }

    // Copy the rearranged elements back to the original array
    for (int i = 0; i < size; ++i) {
        arr[i] = temp[i];
    }
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Input the array elements
    inputArray(arr, size);

    // Separate even and odd numbers
    separateEvenOdd(arr, size);

    // Output the rearranged array
    cout << "Array after separating even and odd numbers: ";
    outputArray(arr, size);

    return 0;
}
