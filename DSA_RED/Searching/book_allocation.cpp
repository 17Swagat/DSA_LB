#include <iostream>
#include <vector>
#include <limits.h>
typedef long long ll;

using namespace std;

long long findPages(int n, vector<int> &arr, int m)
{
    // Solution Space
    ll s = 0;
    ll e = 0;
    for (int num : arr)
    {
        e += num;
    }

    // Finding Soln:
    ll soln = INT_MAX;
    while (s <= e)
    {
        ll mid = (s + (e - s) / 2);
        ll sum = 0;
        int people = 1;
        int result = -1;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];

            if (sum > mid)
            {
                people++;
                if ((sum - arr[i]) > result)
                {
                    result = sum - arr[i];
                }
                sum = arr[i];
            }

            if (people > m)
            {
                // INVALID SOLN
                s = mid + 1;
                break;
            }
        }
        if (result < soln)
        {
            soln = result;
        }
        // e = mid - 1;
    }

    return soln;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};

    int result = findPages(arr.size(), arr, 2);

    cout << "result = " << result << "\n";

    return 0;
}