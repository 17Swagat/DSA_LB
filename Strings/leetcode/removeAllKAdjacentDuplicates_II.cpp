#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <vector>

using namespace std;

// M1: In-efficient [But worked]
// M2: Using map, which do not preserve order
// M3: Treating a vector as Stack to store value

string removeDuplicates(string s, int k) {
        // Implement logic to remove k-adjacent duplicates
        // map<char, int> Stack; // ❌ It does not preserve order.
        vector<pair<char, int>> stack;

        for (char c: s) {
            if (!stack.empty() && stack.back().first == c){
                stack.back().second++;
                if (stack.back().second == k) {
                    stack.pop_back();
                }
            } else {
                stack.push_back({c, 1});
            }
        }

        // for (auto item: stack){
        //     cout << item.first << " -> " << item.second << "\n";
        // }

        string result = "";  
        for (auto item: stack){
            string temp(item.second, item.first);
            result += temp;
        }

        return result;
}

int main() {

    string s = "abbbaca";
    int k = 3;

    cout << removeDuplicates(s, k) << "\n";


    return 0;
}