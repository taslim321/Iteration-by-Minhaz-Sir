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

// Function to sort the array in descending order using selection sort
void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Find the maximum element in the remaining unsorted array
        int max_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }
        // Swap the found maximum element with the first element
        int temp = arr[max_idx];
        arr[max_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Input the array elements
    inputArray(arr, size);

    // Sort the array in descending order
    sortDescending(arr, size);

    // Output the sorted array
    cout << "Array sorted in descending order: ";
    outputArray(arr, size);

    return 0;
}
