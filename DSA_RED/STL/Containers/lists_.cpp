#include <iostream>
#include <list>
#include <vector>

using namespace std;

void printList(const list<int>& lst) {
    for (const int& val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

void printVector(const vector<int>& vec) {
    for (const int& val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    list<int> list1 = {1, 2, 3, 4, 5};
    vector<int> vec1 = {1, 2, 3, 4, 5};

    // Inserting into vector
    vec1.insert(vec1.begin() + 2, 10); // Insert 10 at index 2
    printVector(vec1); // Output: 1 2 10 3 4 5

    // Inserting into list
    // *Little different from vector*
    list1.insert(
        next(list1.begin(), 2), // moving
        10 // value
    ); // Insert 10 at index 2
    printList(list1); // Output: 1 2 10 3 4 5

    return 0;
}