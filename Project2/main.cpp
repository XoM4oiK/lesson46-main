#include "util.h"
 int findLongestSequenceRow(int matrix[][4], int rows, int cols);

int main() {
    int matrix[4][4] = {
        {1, 2, 2, 3}, 
        {4, 4, 4, 2}, 
        {5, 5, 5, 5}, 
        {6, 7, 8, 9}  
    };

    int rowIndex = findLongestSequenceRow(matrix, 4, 4);

    if (rowIndex != -1) {
        cout << "Row with the longest sequence of equal elements: " << rowIndex << endl;
    }
    else {
        cout << "No sequences found in the matrix." << endl;
    }

    return 0;
}
