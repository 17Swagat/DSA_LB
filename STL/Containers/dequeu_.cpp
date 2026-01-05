#include <iostream> 
#include <deque>

using namespace std;

void printDeque(deque<int> &d){
    for(auto i : d){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    // #1
    deque<int> d = {1, 2, 3, 4, 5};

    d.erase(d.begin()+ 1, d.end() -1); // 1 5
    printDeque(d);

    return 0;
}