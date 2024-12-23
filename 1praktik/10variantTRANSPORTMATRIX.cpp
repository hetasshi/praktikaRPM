#include <iostream>
using namespace std;

void printMatrix(int rows, int cols, int matrix[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(int rows, int cols, int matrix[10][10], int result[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows = 2, cols = 3;
    int matrix[10][10] = {
        {7, 8, 9},
        {10, 11, 12}
    };
    int transposed[10][10];

    cout << "Исходная матрица:" << endl;
    printMatrix(rows, cols, matrix);

    transposeMatrix(rows, cols, matrix, transposed);

    cout << "Транспонированная матрица:" << endl;
    printMatrix(cols, rows, transposed);

    return 0;
}
