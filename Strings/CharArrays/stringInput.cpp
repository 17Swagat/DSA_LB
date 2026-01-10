#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    // #1 "Char Array String input"
    char value[120];
    cout << "Enter name: " << "\n";
    cin.getline(value, 120); // This code helps us to get input char array string filled with spaces
    cout << value << "\n";

    // #1 "String input"
    string value_2;
    getline(cin, value_2);
    cout << "Value 2 is " << value_2;

    return 0;
}