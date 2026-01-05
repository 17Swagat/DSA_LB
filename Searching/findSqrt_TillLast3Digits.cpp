#include <iostream>
#include <math.h>

using namespace std;

int find_sqrtP1(int x)
{
    int s = 1;
    int e = x;
    int store = -1;

    while (s <= e)
    {
        long long mid = (s + (e - s) / 2);
        if ((mid * mid) <= x)
        {
            store = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }

    return store;
}

long double find_sqrtP2(int x)
{
    /* Finding sqrt() till `last 3 digits after Decimal` */
    long double value = find_sqrtP1(x);
    long double store = value;
    int i = 1;
    while (i <= 3)
    {
        float t = 1;
        value = store;
        while (t < 10)
        {
            value += (1 / pow(10, i)); //(t / pow(10, i));
            if ((value * value) <= x)
            {
                store = value;
            }
            else
            {
                break;
            }
            t++;
        }

        i++;
    }
    return store;
}

int main()
{
    cout << find_sqrtP2(27) << "\n"; // 5.196
    cout << find_sqrtP2(25) << "\n";
    cout << find_sqrtP2(16) << "\n";
    cout << find_sqrtP2(99) << "\n";

    return 0;
}