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

    // Inserting elements into <list>
    auto it = list1.begin();
    advance(it, 2); // Move iterator to the 3rd position
    list1.insert(it, 10); // Insert 10 at the 3rd position

    printList(list1); // Output: 1 2 10 3 4 5

    return 0;
}