#include <iostream>
#include <string>

using namespace std;

void countNoOfSetBits(int n) {
    int count_set_bits = 0;
    while (n) {
        int check = (n & 1);
        if (check == 1) {
            count_set_bits++;
        }
        n = (n >> 1);
    }
    cout << count_set_bits << "\n";
}

int main(){
    
    countNoOfSetBits(5);
    countNoOfSetBits(7);
    countNoOfSetBits(4);
    countNoOfSetBits(1);
    countNoOfSetBits(0);
    countNoOfSetBits(12);
    countNoOfSetBits(14);

    return 0;
}