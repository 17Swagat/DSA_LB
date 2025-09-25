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

    vector<int> vec1(5);
    vec1 = {1, 2, 3, 4, 5, 76};
    for (auto i = vec1.begin(); i != vec1.end(); i++){
        cout << *i << " ";
    }
    cout << "\n";

    cout << vec1.size() << "\n"; // 6
    cout << vec1.capacity() << "\n"; // 6

    // difference between size and capacity
    // size is the number of elements present in the vector
    // capacity is the number of elements that can be stored in the vector without reallocating memory

    return 0;
}