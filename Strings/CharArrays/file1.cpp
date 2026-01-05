#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

 bool isIsomorphic(const string& s, const string& t) {
        // Implement logic to check if `s` and `t` are isomorphic
        if (s.length() != t.length()) 
            return false;
        
        int n = s.length();
        unordered_map<char, char> s_map;
        bool IsIsomorphic = false;
        for(int i = 0; i < n; i++){
            char letter_s = s[i];
            char letter_t = t[i];
            if (!s_map[letter_s]) {
                for (auto &pair: s_map){
                    if (pair.second == letter_t) {
                        IsIsomorphic = false;
                        break;
                    }
                }
                s_map[letter_s] = letter_t;
            }
            if (!IsIsomorphic) {
                break;
            }
            if (s_map[letter_s] == letter_t) {
            }
            else
            {
                IsIsomorphic = true;
                IsIsomorphic = false;
                break;
            }
        }
        return IsIsomorphic;
}

int main() {
    cout << isIsomorphic("abcdefghijklmnop", "aaaaaaaaaaaaaaab") << "\n";
    
    return 0;
}