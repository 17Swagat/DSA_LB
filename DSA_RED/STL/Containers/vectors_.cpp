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

    vector<int> vec1(5, 1);
    printVector(vec1);

    vec1.push_back(2); // add an element at the end

    printVector(vec1);

    vec1.pop_back(); // pop the last element

    printVector(vec1);

    return 0;
}