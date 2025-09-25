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

    vec1.erase(vec1.begin() + 1, vec1.end()-1); // Erase elements from index 1 to index 3 (4 is not included)
    printVector(vec1); // Output: 1 5
    
    return 0;
}