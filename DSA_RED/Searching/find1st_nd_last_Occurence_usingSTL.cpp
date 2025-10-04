#include <iostream>
#include <vector>
#include <algorithm>

std::pair<int, int> findFirstAndLast(const std::vector<int>& vec, int target) {
    auto firstIt = std::lower_bound(vec.begin(), vec.end(), target);
    auto lastIt = std::upper_bound(vec.begin(), vec.end(), target);

    if (firstIt == vec.end() || *firstIt != target) {
        return {-1, -1}; // target not found
    }

    int firstIndex = std::distance(vec.begin(), firstIt);
    int lastIndex = std::distance(vec.begin(), lastIt) - 1;

    return {firstIndex, lastIndex};
}

int main() {
    std::vector<int> sortedVec = {1, 2, 4, 4, 4, 5, 6};
    int target = 4;

    auto [first, last] = findFirstAndLast(sortedVec, target);
    if (first != -1)
        std::cout << "First occurrence: " << first << "\nLast occurrence: " << last << "\n";
    else
        std::cout << "Element not found\n";

    return 0;
}
