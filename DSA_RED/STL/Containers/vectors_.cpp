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

    vector<int> vec1(5);
    cout << vec1.size() << "\n"; // 5
    cout << vec1.capacity() << "\n"; // 5

    vec1 = {1, 2, 3, 4, 5, 76};

    cout << vec1.size() << "\n"; // 6
    cout << vec1.capacity() << "\n"; // 6 

    return 0;
}