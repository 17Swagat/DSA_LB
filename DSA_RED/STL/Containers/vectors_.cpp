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
    cout << vec1.max_size() << "\n"; // Maximum size of the vector in the system

    return 0;
}