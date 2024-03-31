// Write the functions to perform the given matrix operations.
// 1. To multiply 2 matrices and print the resultant matrix
// void mulMat(int mat1[][C1], int mat2[][C2])
// 2. To add 2 matrices and print the resultant matrix
// void addMat(int mat1[][C1], int mat2[][C2])
// 3. To Subtract 2 matrices and print the resultant matrix
// void subMat(int mat1[][C1], int mat2[][C2])

// Write Program to read the matrices and depending on users choice of matrix
// operation execute the relevant function through the command
// fnptr(A,B) where’ A’ and ‘B’ are the matrices and ‘fnptr’ is a pointer to a
// function to which the above functions can be assigned. (Use pointer to
// function concept as given in example 9.7 of chapter 9 from the book). Print all
// the three matrices.




#include <iostream>
using namespace std;

const int R1 = 3;
const int C1 = 3;
const int R2 = 3;
const int C2 = 3;


void printMatrix(int mat[][C1], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void mulMat(int mat1[][C1], int mat2[][C2]) {
    int result[R1][C2];

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < C1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    cout << "Resultant Matrix after multiplication:" << endl;
    printMatrix(result, R1, C2);
}

void addMat(int mat1[][C1], int mat2[][C2]) {
    int result[R1][C1];

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "Resultant Matrix after addition:" << endl;
    printMatrix(result, R1, C1);
}

void subMat(int mat1[][C1], int mat2[][C2]) {
    int result[R1][C1];

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    cout << "Resultant Matrix after subtraction:" << endl;
    printMatrix(result, R1, C1);
}

int main() {
    int mat1[R1][C1], mat2[R2][C2];

    cout << "Enter elements of first matrix (" << R1 << " x " << C1 << "):" << endl;
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of second matrix (" << R2 << " x " << C2 << "):" << endl;
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            cin >> mat2[i][j];
        }
    }

    cout << "Matrix 1:" << endl;
    printMatrix(mat1, R1, C1);

    cout << "Matrix 2:" << endl;
    printMatrix(mat2, R2, C2);

    int choice;
    while  (choice!=0) {
        cout << "Choose operation:" << endl;
        cout << "1. Matrix Multiplication\n2. Martix Addition\n3. Matrix Subtraction\n0. Exit\n";
        cout << "Enter your Choice:";
        cin >> choice;

        void (*fnptr)(int[][C1], int[][C2]);
        switch (choice) {
            case 1:
                fnptr = mulMat;
                fnptr(mat1, mat2);
                break;
            case 2:
                fnptr = addMat;
                fnptr(mat1, mat2);
                break;
            case 3:
                fnptr = subMat;
                fnptr(mat1, mat2);
                break;
            case 0:
                cout << "Exiting Program." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                return 1;
        }
    }
    return 0;
}

