#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int arr1[] = {5, 23, 1, 0, 10};
    sort(arr1, arr1 + sizeof(arr1)/sizeof(int));
    for (auto i: arr1) {
        cout << i << " ";
    }
    
    return 0;
}