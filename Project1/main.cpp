#include "util.h"
extern int findMaxInSortedRows(int matrix[][4], int rows, int cols);

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 4, 3, 2},
        {6, 5, 7, 4},
        {9, 9, 9, 9} 
    };

    int result = findMaxInSortedRows(matrix, 4, 4);

    if (result != -2147483648) {
        cout << "The maximum element from sorted rows is: " << result << endl;
    }
    else {
        cout << "There are no sorted rows in the matrix." << endl;
    }

    return 0;
}
