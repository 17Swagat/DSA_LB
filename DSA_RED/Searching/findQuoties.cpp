#include <iostream>
#include <limits.h>
typedef long long ll;

using namespace std;

long long int findQuotient(int dividend, int divisor) {
    // The user will implement this method

    /*
    [<Handling signs>]
    */
    if ((dividend < 0) && (divisor < 0)){
        dividend = -dividend;
        divisor = -divisor;
    }

    if (divisor == 0)
        return INT_MAX;
    
    int s = 0;
    int e = dividend;

    int store = 0;
    while(s <= e) {
        ll mid = (s+(e-s)/2);
        ll result = mid*divisor;
        if (result <= dividend){
            store = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    
    return store;
}

int main()
{
    // std::cout<<"Hello World";
    ll result = findQuotient(-2147483648, -1);
    cout << result << "\n";

    return 0;
}