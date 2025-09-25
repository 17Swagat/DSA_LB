#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> list1 = {1, 2, 3, 4, 5};

    list1.pop_back();
    list1.pop_front();

    for(int x : list1){
        cout << x << " ";
    }

    return 0;
}