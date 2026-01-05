#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){
    
    vector<int> nums = {1, 2, 3};
    vector<int> nums_2; //(nums.begin(), nums.begin() + 2);

    nums_2.assign(nums.begin(), nums.begin()+2);

    for (auto i: nums_2) {
        cout << i << " ";
    }

    return 0;
}