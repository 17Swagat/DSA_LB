#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &nums){
    int n = nums.size();

    if (nums.size() == 1) {
        return;// nums;
    }

    for (int i = 0; i < n-1; i++){
        for (int k = 0; k < n-1-i; k++) {
            if (nums[k] > nums[k+1]) {
                int temp = nums[k];
                nums[k] = nums[k+1];
                nums[k+1] = temp;
            }
        }
    }

    // return nums;
}

int main(){

    vector<int> nums = {5, 4, 3, 2, 1};

    bubbleSort(nums);

    for (int i: nums) {
        cout << i << " ";
    }
    
    return 0;
}