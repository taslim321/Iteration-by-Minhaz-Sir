#include <iostream>
using namespace std;

// Function to input a matrix
void inputMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
        cout << endl;
    }
}

// Function to output a matrix
void outputMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int r1, int c1, int r2, int c2) {
    // Initialize result matrix to 0
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;

    // Check if multiplication is possible
    if (c1 != r2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    int matrix1[10][10], matrix2[10][10], result[10][10];

    cout << "Enter elements of the first matrix:" << endl;
    inputMatrix(matrix1, r1, c1);

    cout << "Enter elements of the second matrix:" << endl;
    inputMatrix(matrix2, r2, c2);

    multiplyMatrices(matrix1, matrix2, result, r1, c1, r2, c2);

    cout << "Resultant matrix after multiplication:" << endl;
    outputMatrix(result, r1, c2);

    return 0;
}
