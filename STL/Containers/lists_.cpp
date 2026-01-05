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

    // #1
    list1.erase(list1.begin()); // Erase first element
    printList(list1);

    // #2
    list1 = {1, 2, 3, 4, 5};
    list1.erase(
        next(list1.begin(), 1), 
        next(list1.end() , -1)
    ); 
    printList(list1);

    return 0;
}