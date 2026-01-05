#include <iostream>
#include <vector>
#include <algorithm> // for std::find

using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5}; // {2, 3, 4, 5, 1} [SHIFT LEFT]

    int i = 0;
    int n = arr.size();
    int first_element = arr[0];
    while (i < n) {
        if (i == n-1) {
            arr[i] = first_element;
            break;
        }
        arr[i] = arr[i+1];
        i++;
    }

    for (auto element: arr) {
        cout << element << " ";
    }

    return 0;
}