#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void rowWise_SumPrinting(int arr[][3]){
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int k = 0; k < 3; k++) {
            sum += arr[i][k];
        }
        cout << sum << " ";
    }
}

void colWise_SumPrinting(int arr[][3]){
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int k = 0; k < 3; k++) {
            sum += arr[k][i];
        }
        cout << sum << " ";
    }
}

int main() {

    // vector<int> vec_1 = {1,2,3,4,5}; 

    // int arr[2][2] = {
    //     // {1, 2},
    //     // {3, 4}
    // };

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    rowWise_SumPrinting(arr); // [6 15 24]
    cout << "\n";
    colWise_SumPrinting(arr); // [12 15 18]

    // printColWise_2DArray(arr);

    // Col-wise Traversal:
    // for (int i = 0; i < 3; i++) {
    //     for (int k = 0; k < 3; k++){
    //         cout << arr[k][i] << " ";
    //     }
    //     cout << "\n";
    // }

    
    return 0;
}