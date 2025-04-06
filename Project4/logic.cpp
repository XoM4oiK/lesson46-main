#include "util.h"

int findSumBetweenPositives(int* row, int size) {
    int firstPositiveIndex = -1;
    int secondPositiveIndex = -1;
    int sum = 0;


    for (int i = 0; i < size; ++i) {
        if (row[i] > 0) {
            if (firstPositiveIndex == -1) {
                firstPositiveIndex = i;
            }
            else if (secondPositiveIndex == -1) {
                secondPositiveIndex = i;
                break;
            }
        }
    }


    if (firstPositiveIndex != -1 && secondPositiveIndex != -1) {
        for (int i = firstPositiveIndex + 1; i < secondPositiveIndex; ++i) {
            sum += row[i];
        }
    }

    return sum;
}

void processMatrixForSums(int matrix[][4], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        int sum = findSumBetweenPositives(matrix[i], cols);
        cout << "Row " << i << ": Sum between positives = " << sum << endl;
    }
}
