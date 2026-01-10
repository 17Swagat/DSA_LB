#include <iostream>
#include <string>
using namespace std;

int findFirstOccurenceOfSubstring(string s, string p){
    
    int goneThrough = 0;
    int p_length = p.length();
    int index = 0;
    for (char c: s){
        if (c == p[goneThrough]){
            goneThrough++;
            if (goneThrough == p_length) {
                return (index - p_length + 1);
            }
        } else {
            goneThrough = 0;
        }
        index++;
    }
    
    return -1;
}

int main()
{
    string str = "hello world mellow world";
    // string str = "abcdef cf";
    cout << findFirstOccurenceOfSubstring(str, "world"); // 6

    return 0;
}