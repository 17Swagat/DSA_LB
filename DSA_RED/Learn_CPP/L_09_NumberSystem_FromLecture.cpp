/* 
    * Decimal => Binary
    * Method 1: Division Method.
    * Method 2: Binary Method.
*/
/*
#include <iostream>
using namespace std;

int power(int b, int e){
    int result = 1;
    for (int i = 0; i < e; i++){
        result *= b;
    }
    return result;
}

int decimalToBinary_Method1(int n){
    int reversed_bits = 0;
    int i = 0;
    while (n != 0){
        int rem = n % 2; // bit-value
        reversed_bits = (rem) * power(10, i) + reversed_bits; // 📌 [IMPORTANT LOGIC FOR REVERSING THE BITS]
        n = n/2;
        i++;
    }
    return (reversed_bits);
}

int decimalToBinary_Method2(int n){
    // Binary Method:
    int i = 0;
    int value = 0;
    while (n > 0) {
        int bit = (n & 1); // Getting <last bit>
        value = power(10, i) * bit + value;
        n = n >> 1;
        i++;
    }

    return value;
}

int main(){
    //cout << decimalToBinary_Method1(10) << "\n";
    //cout << decimalToBinary_Method1(7) << "\n";

    cout << decimalToBinary_Method2(10) << "\n";
    cout << decimalToBinary_Method2(7) << "\n";
    return 0;
}
*/

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////
/* 
    * Binary => Decimal
*/

#include <iostream>
using namespace std;

int power(int b, int e){
    int result = 1;
    for (int i = 0; i < e; i++){
        result *= b;
    }
    return result;
}

int binaryToDecimal(int n){
    int result = 0;
    int i = 0;
    while (n > 0) {
        int l_d = n % 10;
        result += power(2, i) * l_d;
        i++;
        // n = n >> 1; // Can't do this as <n> is in Decimal [In reality.]
        n = n / 10;
    }
    return result;
}

int binaryToDecimal_M2(int n) {
    /*[Bitwise Method]*/
    /*(The bitwise operation in here will handle `power(2, i++)`)*/
    
    int i = 0;
    int result = 0;
    while (n){
        int l_d = n % 10; // Getting last digit of `n`
        result += (1 << (i++)) * l_d;
        n = n / 10;
    }
    return result;
}

int main(){
    int bn = 10011; // 19
    cout << binaryToDecimal(bn) << "\n";
    cout << binaryToDecimal_M2(bn) << "\n";
}