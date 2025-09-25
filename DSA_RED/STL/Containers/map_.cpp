#include <iostream>
#include <map>
#include <tuple>

using namespace std;

int main()
{
    map<int, string> m = {
        {3, "three"},
        {1, "one"},
        {2, "two"},
    };

    for (auto &item: m){
        cout << item.first << " : " << item.second << "\n";
    }

    return 0;
}