#include <iostream>
using namespace std;

int power(int base, int expo){
    int result = 1;
    for (int i = 0; i < expo; i++) {
        result *= base;
    }
    return result;
}


int binaryToDecimal(int bn){
    // Works ✅
    int r = bn % 10; // last digit of [bn]
    int i = 0;
    int result = 0;
    while (bn != 0 || r != 0){
        result += (power(2, i++) * r);
        bn = bn / 10;
        r = bn % 10;
    }
    return result;

    // ISSUE with the code below: "Works well only one 1st time"
    // B/c: No resetting of [result = 0]  & [i = 0] is done.
    // :=>
    // bn: binary number
    //int q = bn / 10; // remaining digits in the binary no. [excluding the last digit]
    //int r = bn % 10; // last digit of bn
    //static int i = 0;
    //static int result = 0;

    //if (q == 0 && r == 0) {
    //    // result = 0;
    //    // i = 0;
    //    return 0;
    //}

    //result += power(2, i) * r;
    //i++;
    //binaryToDecimal(q);
    //return result;
}

int main(){

    int binary_01 = 1101;
    cout << binaryToDecimal(binary_01) << "\n"; // 13
    binary_01 = 11011;
    cout << binaryToDecimal(binary_01) << "\n"; // 27
    binary_01 = 11011110;
    cout << binaryToDecimal(binary_01) << "\n"; // 222
    binary_01 = 10001;
    cout << binaryToDecimal(binary_01) << "\n"; // 17
    binary_01 = 10000;
    cout << binaryToDecimal(binary_01) << "\n"; // 16
    binary_01 =1010010011;
    cout << binaryToDecimal(binary_01) << "\n"; // 659

    return 0;
}