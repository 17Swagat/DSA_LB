#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(vector<int> &arr, int target){
    int s = 0;
    int e = arr.size()-1;
    while (s <= e){
        int mid = (s+e)/2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            s = mid + 1;
        } else {
            // (arr[mid] > target)
            e = mid - 1;
        }
    }

    return -1;
}

int main(){

    // vector<int> nums = {8, 7,6, 5, 5, 4, 3, 2, 1};
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    int index = binarySearch(nums, 3);
    // cout << index << "\n";
    if (index != -1) {
        cout << "Found element at index: " << index << "\n";
        cout << "Element: " << nums[index];
    }
    
    return 0;
}