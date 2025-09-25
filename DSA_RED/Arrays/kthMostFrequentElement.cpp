#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

 int kthMostFrequent(vector<int>& arr, int k) {
        // Implement logic to find kth most frequent element
        sort(arr.begin(), arr.end());
        map<int, int> numCountsDict;
        int count = 1;

        // Setting Up the counts for each element
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i-1]) {
                numCountsDict[arr[i]] = (++count);
            } else {
                count = 1;
                numCountsDict[arr[i]] = count;
            }          
        }

        // Finding the k'th frequent element:=>
        // 1. Converting map into vector
        vector<pair<int, int>> mapVector(numCountsDict.begin(), numCountsDict.end());

        sort(mapVector.begin(), mapVector.end(), [](auto &a, auto &b){
            if (a.second == b.second) {
                return (a.first < b.first);
            }
            return (a.second > b.second); // descending order
        });

        int search_index = k-1;
        if (mapVector[k-1])

        // return mapVector[k-1].first;
    }

int main() {
    
    map<int , int> counts;
    vector<int> nums = {1, 1, 2, 2, 3};
    int k = 2;

    kthMostFrequent(nums, k);

    return 0;
}
