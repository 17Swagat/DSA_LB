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
    vec1 = {1, 2, 3, 4, 5};
    for (auto i = vec1.begin(); i != vec1.end(); i++){
        cout << *i << " ";
    }

    return 0;
}