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
    
    vector<int> vec1 = {1, 2, 3, 4, 5};

    // #1
    vector<int>::iterator it = vec1.begin();
    
    while (it != vec1.end()){
        cout << *it << " ";
        it++;
    }

    return 0;
}