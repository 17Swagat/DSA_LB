#include <iostream>
#include <vector>
#include <algorithm>

// #define EXIT_COND ((starting_row < ending_row) && (starting_col < ending_col))
#define EXIT_COND2 (elementCount >= (m*n))

using namespace std;

 vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // Implement this method
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> outputMatrix;//(m*n);

        int elementCount = 0;
        int starting_row = 0;
        int ending_row = (m-1);
        int starting_col = 0;
        int ending_col = n-1;

        // while (elementCount <= (m*n)) {
        while (elementCount < (m*n)) { //((starting_row != ending_row) && (starting_col != ending_col)){
            // LR
            for (int i = starting_col; i <= ending_col; i++) {
                outputMatrix.push_back(
                    matrix[starting_row][i]
                );
                elementCount++;
            }
            starting_row++;

            if EXIT_COND2
                break;
   
            // UD
            for (int i = starting_row; i <= ending_row; i++) {
                outputMatrix.push_back(
                    matrix[i][ending_col]
                );
                elementCount++;
            }
            ending_col--;

             if EXIT_COND2
                break;

            // RL
            for (int i = ending_col; i >= starting_col; i--) {
                outputMatrix.push_back(
                    matrix[ending_row][i]
                );
                elementCount++;
            }
            ending_row--;

             if EXIT_COND2
                break;

            // DU
            for (int i = ending_row; i >= starting_row; i++) {
                outputMatrix.push_back(
                    matrix[i][starting_col]
                );
                elementCount++;
            }
            starting_col++;

             if EXIT_COND2
                break;
        }

        return outputMatrix;
}

int main()
{
    // vector<vector<int>> matrix = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };
    
    // vector<vector<int>> matrix = {
    //     {1, 2, 3, 4},
    //     {5, 6, 7, 8},
    //     {9, 10, 11, 12}
    // };

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
    };

    vector<int> result = spiralOrder(matrix);

    for (auto i: result) {
        cout << i << " ";
    }

    return 0;
}