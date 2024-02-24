// Q2. WAP to read a matrix of order ‘n1’ by ‘m1’ and perform the following operations
// i. Transpose of the matrix
// ii. Sum of its major and minor diagonal elements
// iii. Sum of the elements of each row and column separately.
// iv. Find out the largest and the smallest element in each row separately and overall largest
// and smallest element of the matrix.


#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Function to take user input matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display the user inpyt matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to find transpose of a matrix
void transposeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int transposed[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

// Function to find sum of major and minor diagonal elements
void diagonalSum(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int majorDiagonalSum = 0;
    int minorDiagonalSum = 0;
    for (int i = 0; i < rows; ++i) {
        majorDiagonalSum += matrix[i][i];
        minorDiagonalSum += matrix[i][cols - i - 1];
    }
    cout << "Sum of major diagonal elements: " << majorDiagonalSum << endl;
    cout << "Sum of minor diagonal elements: " << minorDiagonalSum << endl;
}

// Function to find sum of elements of each row and column separately
void rowColumnSum(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    cout << "Sum of elements of each row:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    cout << "Sum of elements of each column:" << endl;
    for (int j = 0; j < cols; ++j) {
        int colSum = 0;
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
}

// Function to find largest and smallest element in each row and overall
void findMinMax(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    int overallMax = matrix[0][0];
    int overallMin = matrix[0][0];
    for (int i = 0; i < rows; ++i) {
        int rowMax = matrix[i][0];
        int rowMin = matrix[i][0];
        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] > rowMax)
                rowMax = matrix[i][j];
            if (matrix[i][j] < rowMin)
                rowMin = matrix[i][j];
        }
        cout << "Row " << i + 1 << ": Largest = " << rowMax << ", Smallest = " << rowMin << endl;
        if (rowMax > overallMax)
            overallMax = rowMax;
        if (rowMin < overallMin)
            overallMin = rowMin;
    }
    cout << "Overall Largest: " << overallMax << endl;
    cout << "Overall Smallest: " << overallMin << endl;
}

int main() {
    int n1, m1;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> n1 >> m1;

    int matrix[MAX_SIZE][MAX_SIZE];

    cout << "Enter elements for the matrix:" << endl;
    inputMatrix(matrix, n1, m1);

    cout << "Transpose of the matrix:" << endl;
    int transposed[MAX_SIZE][MAX_SIZE];
    transposeMatrix(matrix, transposed, n1, m1);
    displayMatrix(transposed, m1, n1);

    diagonalSum(matrix, n1, m1);

    rowColumnSum(matrix, n1, m1);

    findMinMax(matrix, n1, m1);

    return 0;
}
