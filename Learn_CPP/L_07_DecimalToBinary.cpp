#include <iostream>

using namespace std;

void decimalToBinary(int n){
    int rem_ = n % 2; 
    int q = (n - rem_) / 2;
    if (q == 0) {
        cout << rem_;
        return;
    }
    decimalToBinary(q);
    cout << rem_;
}

int main(){

    decimalToBinary(32); // 100000
    cout << "\n";
    decimalToBinary(12); // 1100
    cout << "\n";
    decimalToBinary(8); // 1000
    cout << "\n";
    decimalToBinary(9); // 1001

    return 0;
}