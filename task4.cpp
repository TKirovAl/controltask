#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Введите кол-во строк: ";
    cin >> rows;
    cout << "Введите кол-во столбцов: ";
    cin >> cols;

    int **matrix = new int*[rows];
    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int **transposedMatrix = new int*[cols];
    for(int i = 0; i < cols; i++) {
        transposedMatrix[i] = new int[rows];
        for(int j = 0; j < rows; j++) {
            transposedMatrix[i][j] = matrix[j][i];
        }
    }

    cout << "Исходная матрица:" << endl;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Транспонированная матрица:" << endl;
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) {
            cout << transposedMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    for(int i = 0; i < cols; i++) {
        delete[] transposedMatrix[i];
    }
    delete[] transposedMatrix;

    return 0;
