#include <iostream>
#include <cstring>

using namespace std;

bool checkPalindrome(char str[], int strlength){
    int i = 0;
    int k = strlength - 1;
    while (i < k){
        if (str[i] != str[k])
            return false;
        i++;
        k--;
    }
    return true;
}

// Check Palindrome
int main() {
    char str[] = "hello";
    cout << checkPalindrome(str, strlen(str)) << "\n"; // false

    char str2[] = "mellem";
    cout << checkPalindrome(str2, strlen(str2)) << "\n"; // true

    char str3[] = "racecar";
    cout << checkPalindrome(str3, strlen(str3)) << "\n"; // true
    
    return 0;
}