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

    unordered_map<int, string>::iterator it = m.begin();

    while (it != m.end()) {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}

