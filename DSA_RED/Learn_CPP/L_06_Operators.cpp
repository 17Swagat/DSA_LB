#include <iostream>
using namespace std;

int main(){

    // #1
    // int a = 1;
    // a = (a >> 1);
    // cout << a << "\n"; // (1 / 2^1) = 0

    // int b = 1;
    // b = (b << 1);
    // cout << b ; // (1 * 2^1) = 2

    int a = 12;
    cout << (a ^ a) << "\n"; // 0

    int b1 = 2;
    int b2 = 5;
    cout << (b1 ^ b2) << "\n"; // 7 {Testing it on paper. It will come like this!!}

    b1 = -2;
    b2 = 5;
    cout << (b1 ^ b2) << "\n"; // -5 {📌Eariler: Not sure how negative numbers are handled.}

    b1 = -3;
    b2 = -5;
    cout << (b1 ^ b2) << "\n"; // 6 // ✅

    double x = 23.22;
    cout << (x << 2) << "\n";

    return 0;
}