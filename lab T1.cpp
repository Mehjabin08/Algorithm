#include <bits/stdc++.h>
using namespace std;

void printMatrix(int **p, int r, int c) {
    for(int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row, column;
    cout << "Enter the row and column:" << endl;
    cin >> row >> column;

    // Allocate memory for the rows
    int **m = new int*[row];
    for (int i = 0; i < row; i++) {
        m[i] = new int[column]; // Allocate memory for each column
    }

    srand(time(0)); // Seed the random number generator

    // Fill the matrix with random values
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            m[i][j] = rand() % 100;
        }
    }

    // Print the matrix
    printMatrix(m, row, column);

    // Deallocate memory
    for (int i = 0; i < row; i++) {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
