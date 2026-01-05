// Bubble-Sort Revising:
#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// [5, 4, 3, 2, 1] -> [1, 2, 3, 4, 5]
void bubble_sort(vector<int> &arr){
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int k = i; k < n-i; k++) {
            if (arr[i] > arr[k]){
                swap(arr[i], arr[k]);
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    
    bubble_sort(arr);

    for (int x: arr) {
        cout << x << " ";
    }

    return 0;
}