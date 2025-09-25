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
    vector<int> vec2 = {10, 20, 30, 40, 50};
    vec1.swap(vec2);
    printVector(vec1); // Should print: 10 20 30 40 50
    printVector(vec2); // Should print: 1 2 3 4 5
    
    return 0;
}