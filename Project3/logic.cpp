#include "util.h"

int findLongestIncreasingOrDecreasingSequence(int* row, int size) {
    int maxLength = 1;
    int currentLength = 1;


    for (int i = 1; i < size; ++i) {
        if (row[i] > row[i - 1]) {
            currentLength++;
        }
        else {
            currentLength = 1;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    currentLength = 1; 


    for (int i = 1; i < size; ++i) {
        if (row[i] < row[i - 1]) {
            currentLength++;
        }
        else {
            currentLength = 1;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}

void processMatrixForSequences(int matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        int maxSequenceLength = findLongestIncreasingOrDecreasingSequence(matrix[i], cols);
        std::cout << "Row " << i << ": Longest sequence length = " << maxSequenceLength << std::endl;
    }
}
