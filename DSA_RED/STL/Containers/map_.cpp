#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, pair<string, int>> m = {
        {1, {"student 1", 23}},
        {2, {"student 2", 53}},
        {3, {"student 3", 93}}
    };

    for (auto &item: m){
        cout << item.first << " -> " << item.second.first << ", " << item.second.second << endl;
    }


    return 0;
}