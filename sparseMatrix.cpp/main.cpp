#include <iostream>
using namespace std;

#define MAX 100

// Structure to represent a sparse matrix entry
struct SparseMatrix {
    int row;
    int col;
    int value;
};

// Function to create a simple transpose of a sparse matrix
void transposeSparse(SparseMatrix sparse[], SparseMatrix transpose[], int nonZero) {
    int i, j = 0;

    // Transpose the sparse matrix by swapping row and column
    for(i = 0; i < nonZero; i++) {
        transpose[i].row = sparse[i].col;
        transpose[i].col = sparse[i].row;
        transpose[i].value = sparse[i].value;
    }

    // Sorting by row (optional, for proper order in some cases)
    for(i = 0; i < nonZero; i++) {
        for(j = i + 1; j < nonZero; j++) {
            if(transpose[i].row > transpose[j].row ||
               (transpose[i].row == transpose[j].row && transpose[i].col > transpose[j].col)) {
                swap(transpose[i], transpose[j]);
            }
        }
    }
}

// Function to display the sparse matrix
void displaySparse(SparseMatrix sparse[], int nonZero) {
    cout << "Row\tCol\tValue\n";
    for(int i = 0; i < nonZero; i++) {
        cout << sparse[i].row << "\t" << sparse[i].col << "\t" << sparse[i].value << "\n";
    }
}

int main() {
    int row, col, num;
    cout << "Enter the dimensions of the matrix (row and col): ";
    cin >> row >> col;

    // Input the number of non-zero elements
    cout << "Enter the number of non-zero elements: ";
    cin >> num;

    SparseMatrix sparse[MAX], transpose[MAX];

    // Input non-zero elements in the form of row, column and value
    cout << "Enter the row, column and value of non-zero elements:\n";
    for(int i = 0; i < num; i++) {
        cin >> sparse[i].row >> sparse[i].col >> sparse[i].value;
    }

    // Transpose the sparse matrix
    transposeSparse(sparse, transpose, num);

    // Display the transpose matrix
    cout << "\nTranspose of the sparse matrix:\n";
    displaySparse(transpose, num);

    return 0;
}
