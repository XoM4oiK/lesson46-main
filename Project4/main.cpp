#include "util.h"

 void processMatrixForSums(int matrix[][4], int rows, int cols);

int main() {
    int matrix[4][4] = {
        {1, -2, 3, 4}, 
        {-1, -2, 2, 3},
        {5, 1, 2, -3}, 
        {6, 7, -8, 9}  
    };

    processMatrixForSums(matrix, 4, 4);

    return 0;
}
