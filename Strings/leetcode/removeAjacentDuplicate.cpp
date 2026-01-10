#include <iostream>
using namespace std;

/*string removeDuplicates(string s)
{
    // 1st. Stack approach -> Best
    // 2nd. Experimenting with the worst approach
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            // s = s.substr(i, 2);
            s.erase(i, 2);
            i = -1;
        }
    }

    return s;
}*/

// 3rd.
// LB's shown approach:
string removeDuplicates(string s) {
        string result = "";
        for (int i = 0; i < s.length(); i++){
            if (result.empty()) {
                result += s[i];
            } else {
                if (result.back() == s[i]) {
                    int index = result.length() - 1;
                    result.erase(index, 1);
                }
            }
        }
        return result;
}

int main()
{

    string s = "abbacaz";
    string result = removeDuplicates(s);
    cout << result << "\n";

    return 0;
}