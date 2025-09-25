#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){

    vector<int> num1 = {1, 2, 3};
    vector<int> num2 = {3, 4, 5};

    // num1.push_back(num2);
    num1.insert(num1.end(), num2.begin(), num2.end());
    cout << num1.size() << "\n";

    for (auto i: num1) {
        cout << i << " ";
    }
    
    return 0;
}