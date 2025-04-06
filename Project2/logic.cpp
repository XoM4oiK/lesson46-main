#include "util.h"

int findLongestSequenceRow(int matrix[][4], int rows, int cols) {
    int maxRowIndex = -1; 
    int maxSequenceLength = 0; 

    for (int i = 0; i < rows; ++i) {
        int currentSequenceLength = 1;
        int longestInRow = 1;

        for (int j = 1; j < cols; ++j) {
            if (matrix[i][j] == matrix[i][j - 1]) {
                currentSequenceLength++;
                if (currentSequenceLength > longestInRow) {
                    longestInRow = currentSequenceLength;
                }
            }
            else {
                currentSequenceLength = 1;
            }
        }

        if (longestInRow > maxSequenceLength) {
            maxSequenceLength = longestInRow;
            maxRowIndex = i;
        }
    }

    return maxRowIndex;
}
