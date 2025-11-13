#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    std::vector<int> arr = {1, 2, 4, 4, 4, 5, 6};
    int target = 6;

    auto last_it = upper_bound(arr.begin(), arr.end(), target);

    cout << *(last_it - 1) << "\n";
    // cout << *(last_it-1) << "\n";

    return 0;
}
