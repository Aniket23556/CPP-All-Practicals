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

// Function for addition of matrices
void addMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function for subtraction of matrices
void subtractMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

// Function for multiplication of matrices
void multiplyMatrices(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int n1, m1, n2, m2;
    cout << "Enter the number of rows and columns for matrix 1: ";
    cin >> n1 >> m1;
    cout << "Enter the number of rows and columns for matrix 2: ";
    cin >> n2 >> m2;


    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];

    cout << "Enter elements for matrix 1:" << endl;
    inputMatrix(matrix1, n1, m1);
    cout << "Enter elements for matrix 2:" << endl;
    inputMatrix(matrix2, n2, m2);

    int choice;
    cout << "Select operation:" << endl;
    cout << "1. Matrix Addition\n2. Matrix Subtraction\n3. Matrix Multiplication\n";
    cin >> choice;

    switch (choice) {
        case 1:
            if (n1 != n2 || m1 != m2) {
                cout << "Matrices must have the same dimensions for addition." << endl;
                return 1;
            }
            addMatrices(matrix1, matrix2, result, n1, m1);
            cout << "Result of addition:" << endl;
            displayMatrix(result, n1, m1);
            break;
        case 2:
            if (n1 != n2 || m1 != m2) {
                cout << "Matrices must have the same dimensions for subtraction." << endl;
                return 1;
            }
            subtractMatrices(matrix1, matrix2, result, n1, m1);
            cout << "Result of subtraction:" << endl;
            displayMatrix(result, n1, m1);
            break;
        case 3:
            if (m1 != n2) {
                cout << "Matrix multiplication not possible. Number of columns in matrix 1 must be equal to number of rows in matrix 2." << endl;
                return 1;
            }
            multiplyMatrices(matrix1, matrix2, result, n1, m1, m2);
            cout << "Result of multiplication:" << endl;
            displayMatrix(result, n1, m2);
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    return 0;
}
