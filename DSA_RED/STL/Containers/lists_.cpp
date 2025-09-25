#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> myList;

    // Adding elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Displaying the elements in the list
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}