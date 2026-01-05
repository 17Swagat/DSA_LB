#include <iostream>
#include <vector>

using namespace std;
int peakIndexInMountainArray(vector<int>& arr) {
    // Your implementation here
    int s = 0;
    int e = arr.size() - 1;
    int store = -1;
    while (s <= e) {
        int mid = s + (e-s)/2;
        // L1
        if (arr[mid] < arr[mid+1]) {
            s = mid + 1;
        }
        else {
            // L2
            if ((store[mid] > store[mid+1]) && (store[mid-1] < store[mid])) {
                store = mid;
            }
            e = mid-1;
        }
    }

    return store;
}