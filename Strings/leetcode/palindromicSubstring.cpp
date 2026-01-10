#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int countSubstrings(string s) {
        // 1. Odd length Palindrome
        int n = s.length();
        int cindex = 0;
        int i = 0, j = 0;
        int count = 0;
        while (cindex < n) {
            if (s[i] == s[j]) {
                count++;
                cout << s.substr(i, (j-i + 1)) << "\n";
            } else {
                cindex++;
                i = cindex;
                j = i;
                continue;
            }

            if ((i - 1 < 0) || (j + 1 > n - 1)) {
                cindex++;
                i = cindex;
                j = i;
            } else {
                i--;
                j++;
            }
        }

        cout << "--------------\n";

        // 2. Even length Palindrome
        cindex = 0;
        i = cindex;
        j = i+1;
        while (cindex < n){
            if (s[i] == s[j]){
                count++;
                cout << s.substr(i, (j-i + 1)) << "\n";
            } else {
                cindex++;
                i = cindex;
                j = i+1;
            }
            if ((i - 1 < 0) || (j + 1 > n - 1)) {
                cindex++;
                i = cindex;
                j = i+1;
            } else {
                i--;
                j++;
            }
        }

        return count;
}

int main()
{
    string ip = "abccba";
    cout << countSubstrings(ip);
    return 0;
}