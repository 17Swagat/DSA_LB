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

    // #1
    vector<int>::iterator it = vec1.begin();
    cout << *it << "\n"; // 1
    
    // #2
    for (int i = 0; i < vec1.size(); i++) {
        cout << *(it + i) << " ";
    }

    return 0;
}