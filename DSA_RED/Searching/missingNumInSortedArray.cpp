#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
int missingNumInSortedArray(vector<int> &nums)
{
    // Revising
    // [Using Binary-Search]:
    // sort(nums.begin(), nums.end());

    // {0, 1, 3}
    int missing_num = nums.size();
    int s = 0;
    int e = nums.size() - 1;

    while (s <= e)
    {
        double mid = s + (e - s) / 2.0;
        cout << mid << " ";
        if (nums[mid] == mid)
        {
            s = mid + 1;
        }
        else
        {
            missing_num = mid;
            e = mid - 1;
        }
    }

    cout << "\n---------------\n";
    return missing_num;
}

*/

// Revision:
int missingNumInSortedArray(vector<int> &arr)
{
    int store = -1;
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + (e - s) / 2);
        if (arr[mid] != mid)
        {
            store = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    if (store == -1)
    {
        store = arr.size();
    }
    return store;
}

int main()
{
    // std::vector<int> arr = {0, 1, 2, 3, 4, 6, 7, 8}; // "5" missing
    // std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8}; // "0" missing
    std::vector<int> arr = {0, 1, 2, 3}; // "4" missing

    int missing_num = missingNumInSortedArray(arr);
    cout << missing_num << "\n";

    return 0;
}