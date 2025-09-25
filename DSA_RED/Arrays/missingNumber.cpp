#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = 0;
    int sumShouldBe = (n / 2) * (1 + n); // (3/2)*(1+3) = (3/2)*4 = 3*2 = 6

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    return (sumShouldBe - sum);

    // return 0;
}

int main()
{
    vector<int> nums = {3, 0, 1};
    int missingNum = missingNumber(nums);
    cout << missingNum;

    return 0;
}