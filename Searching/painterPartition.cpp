#include <iostream>
#include <vector>

using namespace std;

int minTime(vector<int> &arr, int k)
{
    // code here
    int s = 0;
    int e = 0;
    for (int num : arr)
    {
        e += num;
    }

    int result = 0;
    while (s <= e)
    {
        int mid = (s + (e - s) / 2);
        int sum = 0;
        int people = 1;
        bool invalid = false;
        for (int num : arr)
        {
            if (sum + num > mid)
            {
                people++;
                if (sum > result)
                {
                    result = sum;
                }
                sum = 0;
            }
            sum += num;
            if (people > k)
            {
                invalid = true;
                break;
            }
        }
        if (invalid)
        {
            s = mid + 1;
        }

        if (result)
        {
            e = mid - 1;
        }
    }

    return result;
}

int main()
{
    vector<int> nums = {5, 10, 30, 20, 15};
    int result = minTime(nums, 3);
    cout << result << "\n";

    return 0;
}