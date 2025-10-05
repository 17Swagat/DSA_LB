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
//     double factor = 1;
//     double ans = num;
//     for (int i = 0; i < precision; i++)
//     {
//         factor /= 10;
//         if ((num * num) == target)
//         {
//             ans = num;
//             continue;
//         }
//         for (int k = 1; k < 10; k++)
//         {
//             num += factor;
//             if ((num * num) <= target)
//             {
//                 ans = num;
//             } else {
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
        
        // Try adding factor up to 9 times
        for (int k = 0; k < 9; k++)
        {
            double test = ans + factor;
            if (test * test <= target)
            {
                ans = test;
            }
            else
            {
                break;
            }
        }
    }
    
    return ans;
}

int main()
{
    int num = mySqrt(111); // 10.440
    cout << num << "\n";
    double ans = calculatePrecision(num, 111, 3);
    cout << ans << "\n";
}