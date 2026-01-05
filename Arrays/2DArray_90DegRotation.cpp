#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// void rotate(vector<vector<int>>& matrix) {
//     int m = matrix.size() - 1;
//     for (int i = 0; i <= m; i++) gg{
//         for (int k = 0; k <= m; k++) {
//             swap(
//                 matrix[i][k],
//                 matrix[(m)-k][i]
//             );
//         }
//     }
// }

int main(){
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // rotate(matrix_2d);
    for (int i = 0; i < matrix.size(); i++) {
            for (int k = 0; k < matrix.size(); k++) {
                // Swapping
                if (i != k) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[k][i];
                    matrix[k][i] = temp;
                }
            }
        } 

    for (int i = 0; i < matrix.size(); i++) {
        for (int k = 0; k < matrix.size(); k++) {
            cout << matrix[i][k] << " ";
        }
        cout << "\n";
    }

    return 0;
}