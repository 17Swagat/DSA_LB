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
    cout << vec1.front() << "\n"; // 1
    cout << vec1.back() << "\n";  // 5
    cout << vec1.empty() << "\n"; // 0 (false)
    vec1.clear(); // removes all elements
    cout << vec1.empty() << "\n"; // 1 (true)
    
    printVector(vec1); // (prints nothing)

    return 0;
}