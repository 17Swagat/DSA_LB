#include <iostream>
#include <string>
using namespace std;

string erasePortion(string s, int startIndex, int length){
    string result = "";
    for(int i = 0; i < startIndex; i++){
        result += s[i];
    }
    
    for (int i = startIndex + length; i < s.length(); i++){
        result += s[i];
    }
    
    return result;
}

int main()
{
    string str = "0123456789ABC";
    string result = erasePortion(str, 3, 5); 
    cout << result << "\n";  // 01289ABC

    str = "012345678910";
    result = erasePortion(str, 5, 2); 
    cout << result << "\n";  // 0123478910


    return 0;
}