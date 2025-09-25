#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> list1 = {1, 2, 3, 4, 5};

    list1.push_front(10); // Add 10 at the front
    
    // Range-based for loop
    for (int item: list1){
        cout << item << " ";
    }

    return 0;
}