#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;
long long int findQuotient(int dividend, int divisor) {
    // The user will implement this method
    if (divisor == 0) {
        return INT_MAX;
    }

    long long sum = 0;
    long long times = 0;
    while (sum <= dividend) {
        sum += divisor;
        times++;
        if (sum == dividend) {
            return times;
        }
    }

    return (times - 1);

    return 0;
}


int main(){
    findQuotient(-50, -5);
    return 0;
}