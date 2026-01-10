#include <iostream>
#include <string>

using namespace std;

string removeDuplicates(string s, int k) {
        // Implement logic to remove k-adjacent duplicates
        int length = s.length();
        int i = 0;
        while (i < length-k) {
            
            int times = 1;
            while (times < k){
                if (s[i] != s[i+times]) {
                    times = 0;
                    break;
                }
                times++;
            }
            if (times) {
                s.erase(i, k);
                length = s.length();
                i = 0;
                continue;
            }
            
            i++;
        }

        return s;
}

int main() {

    // string x = "deeedbbcccbdaa";
    // string x = "pbbcggttciiippooaais"; // ps
    string x = "aabbcc"; // ""
    string result = removeDuplicates(x, 2); 
    cout << result << "\n"; 

    return 0;
}