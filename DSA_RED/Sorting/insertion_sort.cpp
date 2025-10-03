#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &nums){
    int n = nums.size();
    if (n == 1)
        return;
    
    int key = nums[1];
    int k = 1;
    while (k < n){
        int j = (k-1);
        while ((j >= 0) && (nums[j] > key)){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
        key = nums[++k];
    }
}

int main(){

    vector<int> nums = {10, -23,0, 5, 4, 3, 2, 1};

    insertionSort(nums);

    for (int i: nums) {
        cout << i << " ";
    }
    
    return 0;
}