#include <iostream>
#include <iomanip> 
using namespace std;

int age_1 = 50;

int main(){

    // #1
    /*
    int marks = 10;
    cout << marks << "\n"; // 10
    cout << sizeof(marks) << "\n"; // 4 (Bytes) = (4 * 8 bits) = (32 bits)
    cout << INT_MAX << "\n"; // 2147483647
    cout << INT_MIN << "\n"; // -2147483648

    char alpha = 'a';
    cout << alpha << "\n"; // a
    cout << sizeof(alpha) << "\n"; // 1 (Byte)

    float value_01 = 213.23;
    cout << value_01 << "\n"; // 213.23
    cout << sizeof(value_01) << "\n"; // 4 (Byte)
    
    double value_02 = 213.23;
    cout << value_02 << "\n"; // 213.23
    cout << sizeof(value_02) << "\n"; // 8 (Byte)

    bool isMale = true;
    cout << isMale << "\n"; // 1
    cout << sizeof(isMale) << "\n"; // 1 (Byte)

    bool isFemale = 23;
    cout << isFemale << "\n"; // 1
    isFemale = 1;
    cout << isFemale << "\n"; // 1
    isFemale = -23;
    cout << isFemale << "\n"; // 1
    isFemale = 0;
    cout << isFemale << "\n"; // 0
    isFemale = false;
    cout << isFemale << "\n"; // 0

    if (isFemale == false) { // This way also works
        cout << "hi" << "\n"; // hi
    }

    if (isFemale == 0) { // This way also works
        cout << "hi" << "\n"; // hi
    }

    isMale = true;
    if (isMale) { // This way also works
        cout << "hi" << "\n";
    }
    */
    
    
    // #2
    /*
    double x_1 = 55.63248723; 
    cout << x_1 << "\n"; // OUTPUT: 55.6325
    // (Did the rounding off?) 
    // NOTE: "cout rounds to 6 significant digits by default.""
    
    // Controlling Precision:=>
    cout << fixed << setprecision(8) << x_1; // Output: 55.63248723
    */


    // #3
    // cout << UINT_MAX << "\n"; // 4294967295


    // #4
    int age_1 = 10;
    cout << ::age_1 << "\n"; // 50  [Accessing global Variable]
    {
        cout << age_1 << "\n"; // 10

        int age_1 = 20;
        cout << age_1 << "\n"; // 20

        cout << ::age_1 << "\n"; // 50  [Accessing global Variable]
    }
    cout << age_1 << "\n"; // 10

    return 0;
}