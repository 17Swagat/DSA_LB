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
    
    vector<int> vec1 = {1, 2, 3, 4, 5};

    vec1.erase(vec1.begin() + 1); // Erase element at index 1
    printVector(vec1); // Output: 1 3 4 5 

    return 0;
}