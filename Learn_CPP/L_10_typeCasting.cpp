#include <iostream>
using namespace std;
int main(){
    // Automatic typeConversion
    // double value_d1 = 23.3242;
    // int value_i1 = value_d1;
    // cout << value_i1 << "\n"; // 23

    // Manual Conversion
    char a = 'A';
    cout << a << "\n"; // A
    cout << (int) a << "\n"; // 65
    cout << (double) a << "\n"; // 65

    return 0;
}