#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){

    vector<vector<int>> vec = {
        {1, 44}, {0, 55}, {0, 22}, {0, 11}, {2, 33}
    };

    // Tasks: Sort the Above 2D vector in DESCENDING ORDER, based on their "2nd element"
    
    sort(vec.begin(), vec.end(), [](vector<int> &a, vector<int> &b){
        return (a[1] < b[1]);
    });

    for (auto v: vec) {
        for (int i: v) {
            cout << i << " ";
        }
        cout << " ";
    }
    
    return 0;
}