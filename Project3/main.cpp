#include "util.h"
void processMatrixForSequences(int matrix[][4], int rows, int cols);

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 1},
        {5, 4, 3, 2},
        {1, 1, 1, 1},
        {1, 3, 2, 4} 
    };

    processMatrixForSequences(matrix, 4, 4);

    return 0;
}
