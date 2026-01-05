#include <iostream>
// #include <typeinfo> // Required for typeid
#include <vector>
#include <limits.h>

using namespace std;

int power(int b, int e)
{
    int result = 1;
    for (int i = 0; i < e; i++)
    {
        result *= b;
    }
    return result;
}

int noOfDigits(int num)
{
    int count = 1;
    while (num)
    {
        count++;
        num = num / 10;
    }
    return count;
}

string isNarcissistic(int num)
{
    // Implement logic to check if num is Narcissistic
    // num >= 0
    if (num == 0)
        return "Yes";

    int digitCount = noOfDigits(num);
    int result = 0;
    while (num)
    {
        int ld = (num % 10);             // last digit
        result += power(ld, digitCount); // int(pow(ld, digitCount));
        num = num / 10;
    }

    if (result == num)
        return "Yes";

    return "No";
}

int main()
{

    int n = 153;
    cout << isNarcissistic(n);

    return 0;
}