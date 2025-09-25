#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> list1 = {1, 20, 3, 4, 5};

    list<int>::iterator it = list1.begin();
    while (it != list1.end()) {
        cout << *it << " ";
        it++;
    }

    return 0;
}