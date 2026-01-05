#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

// 1st occurence
int firstOccurence(vector<int> &nums, int target)
{
    int store = -1;
    int s = 0;
    int e = nums.size() - 1;
    while (s < e)
    {
        int mid = (s + (e - s) / 2);
        if (nums[mid] == target)
        {
            if ((store == -1) || (mid < store))
            {
                store = mid;
            }
        }
        else
        {
            if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }

    return store;
}

// Last occurence
int lastOccurence(vector<int> &nums, int target)
{
    int s = 0;
    int e = nums.size() - 1;
    int store = -1;
    while (s <= e)
    {
        int mid = (s + (e - s) / 2);
        if (nums[mid] == target)
        {
            if ((mid > store) || (store == -1))
            {
                store = mid;
            }
        }
        else
        {
            if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }

    return store;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    int a = firstOccurence(nums, target);
    int b = lastOccurence(nums, target);
    vector<int> result = {a, b};
    return result;
}

int main()
{
    vector<int> a = {5, 7, 7, 8, 8, 10};
    int target = 8;
    vector<int> result = searchRange(a, target);

    cout << result[0] << " " << result[1];

    return 0;
}
