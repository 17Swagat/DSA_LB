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
    deque<int> d = {1, 2, 3};
    printDeque(d);
    
    // Pop Back
    d.pop_back();
    printDeque(d);

    // Pop Front
    d.pop_front();
    printDeque(d);

    return 0;
}