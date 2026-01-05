#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {1, 2, 4, 4, 4, 5, 6};
    int target = 4;

    vector<int>::iterator first_iter = lower_bound(arr.begin(), arr.end(), target);
    vector<int>::iterator last_iter = upper_bound(arr.begin(), arr.end(), target);

    if (first_iter != arr.end() && *first_iter == target)
    {
        if (*(last_iter - 1) == target)
        {
            cout << "Total occurence : " << (last_iter) - (first_iter) << "\n";
        }
    }

    return 0;
}
