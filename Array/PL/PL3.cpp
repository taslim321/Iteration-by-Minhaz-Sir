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

// Function to find the most occurring element in the array
int findMostOccurringElement(int arr[], int size) {
    int maxCount = 0;
    int mostOccurringElement = arr[0];

    for (int i = 0; i < size; ++i) {
        int count = 1;
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostOccurringElement = arr[i];
        }
    }

    return mostOccurringElement;
}

int main() {
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    // Input the array elements
    inputArray(arr, size);

    // Find the most occurring element
    int mostOccurringElement = findMostOccurringElement(arr, size);

    // Output the most occurring element
    cout << "The most occurring element is: " << mostOccurringElement << endl;

    return 0;
}
