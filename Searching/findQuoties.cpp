#include <iostream>
#include <limits.h>
typedef long long ll;

using namespace std;

int findQuotient(int dividend, int divisor)
{
    /*Sign-Handling*/
    int negative = 1;
    if (dividend < 0)
    {
        negative = -negative;
    }
    if (divisor < 0)
    {
        negative = -negative;
    }

    // Turning numbers to +ve
    if (dividend < 0)
    {
        dividend = -dividend;
        // If number is still -ve =>
        // Its a big negative number to turn into its positive counterpart
        if (dividend < 0)
        {
            dividend += 1;
            dividend = -dividend;
        }
    }

    if (divisor < 0)
    {
        divisor = -divisor;
    }

    // BS:
    int s = 0;
    int e = dividend;
    int store = 0;
    while (s <= e)
    {
        int mid = (s + (e - s) / 2);
        int result = mid * divisor;
        if (result == dividend)
        {
            return (negative * mid);
        }
        if (result <= dividend)
        {
            store = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return (negative * store);
}

int main()
{
    // std::cout<<"Hello World";
    ll result = findQuotient(-2147483648, -1);
    cout << result << "\n";

    return 0;
}