#include "util.h"

bool isSortedAscending(int* row, int size) {
    for (int i = 1; i < size; ++i) {
        if (row[i] < row[i - 1]) return false;
    }
    return true;
}

bool isSortedDescending(int* row, int size) {
    for (int i = 1; i < size; ++i) {
        if (row[i] > row[i - 1]) return false;
    }
    return true;
}

int findMaxInSortedRows(int matrix[][4], int rows, int cols) {
    int globalMax = -2147483648; 
    for (int i = 0; i < rows; ++i) {
        if (isSortedAscending(matrix[i], cols) || isSortedDescending(matrix[i], cols)) {
            int localMax = matrix[i][0];
            for (int j = 1; j < cols; ++j) {
                if (matrix[i][j] > localMax) {
                    localMax = matrix[i][j];
                }
            }
            if (localMax > globalMax) {
                globalMax = localMax;
            }
        }
    }
    return globalMax;
}
