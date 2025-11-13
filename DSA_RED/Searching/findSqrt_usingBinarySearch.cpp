#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int mySqrt(int x)
{

    // "The square root of a number `x` lies between [1, x]"

    int s = 1;
    int e = x;
    int store = 0;

    while (s <= e)
    {
        // long long unsigned int mid = s + (e - s) / 2; //(s+e)/2;
        int mid = s + (e - s) / 2; //(s+e)/2;
        if ((mid) <= (x / mid))
        {
            store = mid;
            s = mid + 1;
        }
        else
        {
            // (mid * mid) >= x
            e = mid - 1;
        }
    }

    return store;
}

// double calculatePrecision(double num, int target, int precision)
// {
//     double ans = num;
//     double factor = 1.0;

//     for (int i = 0; i < precision; i++)
//     {
//         factor /= 10;

//         // Try adding factor up to 9 times
//         for (int k = 0; k < 9; k++)
//         {
//             double test = ans + factor;
//             if (test * test <= target)
//             {
//                 ans = test;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }

//     return ans;
// }

double calculatePrecision(double num, int target, int precision)
{
    double ans = num;
    double factor = 1.0;

    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (int k = 0; k < 10; k++)
        {
            double test = ans + factor;
            if (test * test <= target)
            {
                ans = test;
            } else {
                break;
            }
        }
    }
    return ans;
}

int main()
{
    int target = 26;//111
    int num = mySqrt(target); 
    cout << num << "\n";
    double ans = calculatePrecision(num, target, 3);
    cout << ans << "\n";
}