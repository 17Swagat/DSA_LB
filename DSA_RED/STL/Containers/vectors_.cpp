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
    vec1.insert(vec1.begin() + 2, 10); // {1, 2, 10, 3, 4, 5}
    printVector(vec1);
    
    // #2
    vec1 = {1, 2, 3, 4, 5};
    vec1.insert(vec1.end()-1, 20); // {1, 2, 3, 4, 20, 5}
    printVector(vec1);

    return 0;
}