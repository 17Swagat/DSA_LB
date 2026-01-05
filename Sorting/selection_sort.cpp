#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &nums){
    int n = nums.size();
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n-1; i++) {
        int smallest = nums[i];
        int smallest_index = i;
        for (int k = i+1; k < n; k++){
            if (smallest > nums[k]) {
                smallest = nums[k];
                smallest_index = k;
            }
        }
        // Swap:
        {
            int temp = nums[i];
            nums[i] = nums[smallest_index];
            nums[smallest_index] = temp;
        }
    }
}

int main(){

    // vector<int> nums = {-3,10, 20, 5, 4, 3}; // {3, 4, 5, 10}
    vector<int> nums = {-3,10, 10, 3, 20, 5, 4, 3}; // {3, 4, 5, 10}

    selectionSort(nums);

    for (int i: nums) {
        cout << i << " ";
    }
    
    return 0;
}