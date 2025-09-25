#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> &vec){
    for (auto it : vec){
        cout << it << " ";
    }
    cout << "\n";
}

int main(){

    // #1
    vector<int> v;
    printVector(v);

    // #2
    vector<int> a(5, 1); // 5 elements with value 1
    printVector(a);

    // #3
    vector<int> b(a); // copy of vector a
    printVector(b);

    // #4
    vector<int> c(5); // 5 elements with default value 0
    printVector(c);

    return 0;
}