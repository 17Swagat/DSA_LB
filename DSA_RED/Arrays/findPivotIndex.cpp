#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        int start = 0;
        int end = nums.size() - 1;
        while (start < end) {
            rightSum += nums[end];
            if (leftSum == rightSum) {
                return start;
            }            
            if (leftSum < rightSum) {
                leftSum += nums[start];
                start++;
            } else {
                end--;
            }
        }

        return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    pivotIndex(nums);

    return 0;
}