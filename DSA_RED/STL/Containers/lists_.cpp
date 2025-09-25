#include <iostream>
#include <list>

using namespace std;

void printList(const list<int>& lst) {
    for (const int& val : lst) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    list<int> list1 = {1, 2, 3, 4, 5};
    list<int> list2 = {10, 20, 30, 40, 50};

    // Splice: "Transfer elements from list2 to list1"
    list1.splice(list1.end(), list2);
    printList(list1); // Output: 1 2 3 4 5 10 20 30 40 50
    printList(list2); // Output: (empty)

    return 0;
}