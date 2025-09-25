#include <iostream>
#include <string>

using namespace std;

string isPalindrome(int num) {
        // Implement logic to check if num is a palindrome

        // Reversing the i/p number
        int orginal_value = num;
        int rev_num =0;
        while (num) {
            int ld = num % 10;
            rev_num = 10 * rev_num + ld;
            num = num / 10;
        }

        if (rev_num == orginal_value) {
            return "Yes";
        } else {
            return "No";
        }

        return ""; // Placeholder return; user will complete the logic
    }

int main(){

    cout << isPalindrome(121) << "\n";

    return 0;
}