#include <iostream>
#include <cstring>

using namespace std;

// Check Palindrome
int main() {
    string hello = "Hello";

    // Appending Strings
    hello.append("World");
    cout << hello << "\n";

    // Appending chars
    hello.push_back('X');
    cout << hello << "\n";

    // String length
    cout << hello.length() << "\n";

    cout << "\n-----------------------\n";
    
    // Iterator of a string
    string name = "melloWorld";
    string::iterator ptr = name.begin();
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    
    
    return 0;
}