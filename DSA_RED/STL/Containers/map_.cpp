#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, string> m = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
    };

    for (auto &item: m){
        cout << item.first << " : " << item.second << "\n";
    }

    return 0;
}

