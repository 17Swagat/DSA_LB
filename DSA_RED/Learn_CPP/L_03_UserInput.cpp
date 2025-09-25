#include <iostream>

using namespace std;

int main(){

    // #2
    bool pass;
    cout << "You passed or not: ";
    cin >> pass;
    
    if (pass) {
        cout << "You Passed!!";
    } else {
        cout << "You Failed!!";
    }

    return 0;
}