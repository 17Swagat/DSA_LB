#include <iostream>
#include <string>

using namespace std;

// find()
// substr()

int main(){
    // #1 find():
    /*string hello = "hello World";
    cout << hello.find('W') << "\n"; // 6
    cout << hello.find('x') << "\n"; // A_LARGE_BIG_NUMBER
    cout << hello.find('y') << "\n"; // A_LARGE_BIG_NUMBER
    cout << (hello.find('y') == string::npos) << "\n"; // true
    */

    // #2 substr():
    string hello = "hello world";
    cout << hello.substr(0, -1) << "\n";
    cout << hello.substr(0, -1) << "\n"; 
    cout << hello.substr(5); 
    
    return 0;
}