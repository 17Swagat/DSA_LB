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
    vec1 = {1, 2, 3, 4, 5, 76};

    // Accessing first element using begin()
    int num_1 = *vec1.begin();
    cout << num_1 << "\n";
    
    // Dereferencing end() gives garbage value
    int num_2 = *vec1.end();
    cout << num_2 << "\n"; // Garbage value

    // Accessing last element using end()
    int num_3 = *(vec1.end() - 1);
    cout << num_3 << "\n";

    return 0;
}