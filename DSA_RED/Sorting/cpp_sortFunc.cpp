#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool my_comparator(int &a, int &b) {
    return (a>b);
}

int main(){

    // #1
    // int arr1[] = {5, 23, 1, 0, 10};
    // sort(arr1, arr1 + sizeof(arr1)/sizeof(int));
    // for (auto i: arr1) {
    //     cout << i << " ";
    // }

    // #2
    // vector<int> vec1 = {5, 23, 1, 0, 10};
    // sort(vec1.begin(), vec1.end());  // sorting in <ASCENDING ORDER>
    // for (auto i: vec1) {
    //     cout << i << " ";
    // }

    // #3
    vector<int> vec1 = {5, 23, 1, 0, 10};
    sort(vec1.begin(), vec1.end(), my_comparator);  // sorting in <DESCENDING ORDER>
    for (auto i: vec1) {
        cout << i << " ";
    }
    
    return 0;
}