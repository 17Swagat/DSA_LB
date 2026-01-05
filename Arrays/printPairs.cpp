#include <iostream>
#include <vector>
#include <algorithm>  // for std::find

using namespace std;

  vector<vector<int>> threeSum(vector<int> &nums) {
    // Implementation will go here
    vector<vector<int>> uniqueTriplets = {};

    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        for (int k = j + 1; k < nums.size(); k++) {
          int sum = nums[i] + nums[j] + nums[k];
          if (sum == 0) {
            vector<int> put_vec = {nums[i], nums[j], nums[k]};
            sort(put_vec.begin(), put_vec.end());
            auto it = std::find(uniqueTriplets.begin(), uniqueTriplets.end(), target);
            if (it != uniqueTriplets.end()) {
                // "Triplet Exists!!"
                continue;
            } else {
                // "Triplet Does Not Exists!!"
                uniqueTriplets.push_back(put_vec);
            }
          }
        }
      }
    }

    return uniqueTriplets;
  }

int main() {
    std::vector<std::vector<int>> uniqueTriplets = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::vector<int> target = {3, 2, 1};

    auto it = std::find(uniqueTriplets.begin(), uniqueTriplets.end(), target);

    if (it != uniqueTriplets.end()) {
        std::cout << "Triplet exists!\n";
    } else {
        std::cout << "Triplet not found!\n";
    }

    return 0;
}
