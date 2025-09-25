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

    // Swapping List Contents
    list1.swap(list2);
    
    printList(list1); // Outputs: 10 20 30 40 50 
    printList(list2); // Outputs: 1 2 3 4 5 

    return 0;
}