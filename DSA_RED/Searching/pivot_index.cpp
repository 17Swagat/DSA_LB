#include <iostream>
#include <vector>

using namespace std;

int findPivotIndex(vector<int>& nums){
//code here
    int n = nums.size();
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = s+(e-s)/2;

        if (nums[mid] > nums[mid + 1]){
            return mid;
        } else {
            if ((nums[mid] < nums[mid+1]) && (nums[mid] < nums[0])) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int pivotIndex = findPivotIndex(arr);
    if (pivotIndex != -1)
    {
        cout << "Pivot element found at index: " << pivotIndex << endl;
    }
    else
    {
        cout << "No pivot element found." << endl;
    }
    return 0;
}