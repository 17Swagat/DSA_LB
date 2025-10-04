#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int lastOccurence(int target, vector<int> &arr){
    // Assuming: `arr` -> Sorted in "Increasing Order"
    int store = -1;

    int s = 0;
    int e = arr.size() - 1;

    while (s <= e) {
        int mid = (s + e) / 2;
        if (target == arr[mid]) {
            store = mid;
            s = mid + 1;
        } else if (target < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return store;
}

int main(){
    vector<int> nums = {10, 11, 20, 20, 20, 30, 40, 40, 50};
    int ans = lastOccurence(40, nums); 
    cout << ans << "\n"; // 7
    
    return 0;
}