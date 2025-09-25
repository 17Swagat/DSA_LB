#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &vec){
    for (auto it : vec){
        cout << it << " ";
    }
    cout << "\n";
}

int main(){
    
    // 2D Vector Declaration, also specifying size
    vector<vector<int>> vec(3, vector<int>(4, 10)); // 3 rows and 4 columns initialized to 10
    printVector(vec[0]); // Print first row

    return 0;
}