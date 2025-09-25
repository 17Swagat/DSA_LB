#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m = {
        {1, "one"},
        {2, "two"},
        {3, "three"}
    };

    for (auto &pr : m) {
        cout << pr.first << " -> " << pr.second << endl;
    }

    return 0;
}